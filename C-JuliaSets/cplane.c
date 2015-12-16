#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "cplane.h"

// Create cplane
CPLANE new_cplane(long double xmin,long double xmax,long double ymin,long double ymax,unsigned long int xpoints,unsigned long int ypoints){
    CPLANE cpl;

// Initiate mat as a mutidimensional array of complex values
    int i;
    if (cpl.mat=(complex **) malloc(sizeof(complex *)*ypoints)){
        for(i=0;i<xpoints;i++){
            cpl.mat[i] = (complex *)malloc(sizeof(complex)*xpoints);
        }
    }

    
    
    
// Initiate parameters
    cpl.xmin = xmin;
    cpl.xmax = xmax;
    cpl.ymin = ymin;
    cpl.ymax = ymax;
    cpl.xpoints = xpoints;
    cpl.ypoints = ypoints;
    int x,y;
    long double x_incr, y_incr;
    x_incr = (xmax-xmin)/(long double) xpoints;
    y_incr = (ymax-ymin)/(long double) ypoints;
    for(y=0; y<ypoints; y++){
        for(x=0; x<xpoints; x++){
            cpl.mat[y][x].x = xmin + x*x_incr;
            cpl.mat[y][x].y = ymin + y*y_incr;
        }
    }
    return cpl;
}

// Print the complex plane
void print_cpl(CPLANE comp_plane){
    int x;
    int y;

    for(y = 0; y < (comp_plane.ypoints); ++y){
        for( x = 0; x < (comp_plane.xpoints); ++x){
            printf("%Lf  %Lf", comp_plane.mat[y][x].x, comp_plane.mat[y][x].y);
        }
        puts("\n");
    }
    puts("\n");
}

// Release memory
void release(CPLANE comp_plane){
    free(comp_plane.mat);
}
