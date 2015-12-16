#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

typedef std::complex<long double> complex;

class cplane{
    public:
    long double xmin;
    long double xmax;
    long double ymin;
    long double ymax;
    unsigned long int xpoints;
    unsigned long int ypoints;
    boost::numeric::ublas::matrix<complex> mat;
    void set(long double,long double,long double,long double,unsigned long int,unsigned long int);
};

void print_matrix(cplane &cp);
