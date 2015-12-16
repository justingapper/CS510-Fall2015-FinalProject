#include <iostream>
#include <complex>
#include <cstdio>
#include "cplane.hpp"
#include "julia.h"
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

// initiate cplane parameters
int main(int argc,char *argv[]){
        long double xmin;
        long double xmax;
        long double ymin;
        long double ymax;
        unsigned long int xpoints;
        unsigned long int ypoints;

// Validate number of inputs
    if(argc!=7){
        return 0;
    }
    boost::numeric::ublas::matrix< std::complex<long double> > test2;

// Obtain inputs
    std::stringstream(argv[1]) >> xmin;
    std::stringstream(argv[2]) >> xmax;
    std::stringstream(argv[3]) >> ymin;
    std::stringstream(argv[4]) >> ymax;
    std::stringstream(argv[5]) >> xpoints;
    std::stringstream(argv[6]) >> ypoints;

// Initiate cplane
    cplane cplane_cpp;
    cplane_cpp.set(xmin,xmax,ymin,ymax,xpoints,ypoints);
    complex compC (0,0);
    int out;
    for(int y =0; y<cplane_cpp.ypoints; y++){
        for(int x =0; x<cplane_cpp.xpoints; x++){
            complex temp = cplane_cpp.mat(x,y);
            for(out=0; out<1000; out++){
                if(std::abs(temp)>2.0)break;
                temp = juliamap(temp,cplane_cpp.mat(x,y));
            }
            std::cout << cplane_cpp.mat(x,y).real() << " " << cplane_cpp.mat(x,y).imag() << " " << out << std::endl;
        }
    }

}
