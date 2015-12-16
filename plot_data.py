import matplotlib as mpl
mpl.use('Agg')  # enable display
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import sys

csvfile = sys.argv[1]
print csvfile

fname = csvfile[csvfile.rfind('/')+1:-3] + "jpg"
print fname

# Pandas read csv
df = pd.read_csv(csvfile,sep=' ',names=list('xyz'))
data = df.pivot('y','x','z')

# plot using pyplot
xval,yval = data.columns.values,data.index.values
plt.xticks([0,len(xval)],[xval[0],xval[-1]])
plt.yticks([0,len(yval)],[yval[0],yval[-1]])
plt.imshow(np.log(data.values))
plt.gca().invert_yaxis()

# save jpg with image size for easy viewing in Sage
plt.savefig(fname,dpi=100)