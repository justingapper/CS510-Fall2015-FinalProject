#!/bin/bash

cd ~/github/CS510-Fall2015-FinalProject/C-JuliaSets
make clean
make 

./julia -2 2 -2 2 100 100 .3 .48 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -.25 0 -.25 0 1920 1920 .26 .0015 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -2 2 -2 2 1000 1000 .26 .0015 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -.5 0 0 .5 1000 1000 -.4 .6 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -2 2 -2 2 1920 1920 -.4 .6 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -2 2 -2 2 1920 1920 .295 .01 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -2 2 -2 2 1920 1920 .325 .02 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -2 2 -2 2 1000 1000 -1.037 .17 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv
#./julia -2 2 -2 2 100 100 -1.037 .17 > ~/github/CS510-Fall2015-FinalProject/juliaset.csv

#cd -
cd ~/github/CS510-Fall2015-FinalProject/Cpp-Mandelbrot
make clean
make 
./mandelbrot -.1 -.05 .95 1 1920 1920 > ~/github/CS510-Fall2015-FinalProject/mandelbrot.csv
#./mandelbrot -.1 .1 .75 1 1920 1920 > ~/github/CS510-Fall2015-FinalProject/mandelbrot.csv
#./mandelbrot -2 2 -2 2 1920 1920 > ~/github/CS510-Fall2015-FinalProject/mandelbrot.csv
