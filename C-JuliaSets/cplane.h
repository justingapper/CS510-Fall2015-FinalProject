#include "complex.h"

// Struct matrix
struct MATRIX{
    unsigned int rows;
    unsigned int cols;
    long double *mat;
};

// Struct cplane using pointer to pointer **
struct cplane{
    long double xmin;
    long double xmax;
    long double ymin;
    long double ymax;
    unsigned long int xpoints;
    unsigned long int ypoints;
    complex **mat;
};

// cplane typedef
typedef struct cplane CPLANE;

// Initiate new cplane
CPLANE new_cplane(long double xmin,long double xmax,long double ymin,long double ymax,unsigned long int xpoints,unsigned long int ypoints);

// Print cplane
void print_cpl(CPLANE aplane);

// Release memory
void release(CPLANE aplane);
