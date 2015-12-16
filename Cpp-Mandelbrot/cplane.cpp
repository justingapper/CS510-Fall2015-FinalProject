#include <iostream>
#include <complex>
#include <cstdio>
#include "cplane.hpp"
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

// Initiate parameters
void cplane::set(long double x1,long double x2,long double y1,long double y2,unsigned long int nx,unsigned long int ny){
    xmin=x1;
    xmax=x2;
    ymin=y1;
    ymax=y2;
    xpoints=nx;
    ypoints=ny;

// validate that x min and y min are less than x max and y max, respectively
    if(xmin>=xmax){
        std::cout << "X minimum is larger than x maximum.\n";
        return;
    }
    if(ymin>=ymax){
        std::cout << "Y minimum is larger than Y maximum.\n";
        return;
    }

// Calculate even x and y increments 
    mat.resize(xpoints,ypoints);
    long double x_incr,y_incr;
    x_incr = (xmax-xmin)/(long double) xpoints;
    y_incr = (ymax-ymin)/(long double) ypoints;
    for(int y =0;y<ypoints;y++){
        for(int x =0;x<xpoints;x++){
            std::complex<long double> tmp (xmin+x*x_incr,ymin+y*y_incr);
            mat(x,y)=tmp;
        }
    }
    return;
}

void print_matrix(cplane &cp){
        for(unsigned int i = 0; i < cp.ypoints; ++i){
                for(unsigned int j = 0; j < cp.xpoints; ++j){
                        std::cout << cp.mat(i,j) << " ";
                }
                std::cout << std::endl;
        }
        std::cout << std::endl;
}
