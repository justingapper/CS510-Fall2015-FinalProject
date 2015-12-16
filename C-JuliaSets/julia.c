#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "cplane.h"

int main(int argc, char *argv[]){

        // initiate parameters for cplane
        long double xmin;
        long double xmax;
        long double ymin;
        long double ymax;
        unsigned long int xpoints;
        unsigned long int ypoints;

        // initiate complex number
        complex compC;
        // validate number of parameters
        if(argc!=9){
            // Not enough parameter
            return;
        }

        // Get input parameters from user
        sscanf(argv[1],"%Lf",&xmin);
        sscanf(argv[2],"%Lf",&xmax);
        sscanf(argv[3],"%Lf",&ymin);
        sscanf(argv[4],"%Lf",&ymax);
        sscanf(argv[5],"%ld",&xpoints);
        sscanf(argv[6],"%ld",&ypoints);
        sscanf(argv[7],"%Lf",&compC.x);
        sscanf(argv[8],"%Lf",&compC.y);

        // Create complex plane
        CPLANE cplane1;
        cplane1 = new_cplane(xmin,xmax,ymin,ymax,xpoints,ypoints);


        // Interate over complex plane
        int out;
        int x,y;
        for(y=0;y<cplane1.ypoints;y++){
            for(x=0;x<cplane1.xpoints;x++){
                //printf("%Lf %Lf \n",cplane1.mat[y][x].x,cplane1.mat[y][x].y);

                // Calculate Julia set
                complex tmp = cplane1.mat[y][x];
                for(out=0;out<1000;out++){
                    tmp = juliamap(&tmp,&compC);
                    // Check if outside the radius
                    long double rad = tmp.x*tmp.x + tmp.y*tmp.y;
                    if(rad>4) break;
                }
                printf("%Lf %Lf %d\n",cplane1.mat[y][x].x,cplane1.mat[y][x].y,out);
            }
        }
        return 0;
}
