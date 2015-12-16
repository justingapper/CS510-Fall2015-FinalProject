#include <complex>
#include <iostream>
#include <cstdio>
#include "julia.h"
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

// apply Juliaset function
complex juliamap(complex z,complex c){
    complex compjulia;
    compjulia = z*z + c;
    return compjulia;
}
