# README: CS510-Fall2015-FinalProject
### Justin Gapper

#### This directory contains a program which will produce a jpg of the julia set and mandelbrot set for given parameters.  The directory is organized as follows:

## <u>CS510-Fall2015-FinalProject (main directory)</u>
### generate_output.sh
#### Bash script to call Makefiles in both C-JuliaSets and Cpp-Mandelbrot folders.
### plot_data.py
#### Python script that generates a .jpg plot of the values for the given .csv input.
## <u>C-JuliaSets</u>
### complex.h
#### Header file with function definitions for complex.c
### complex.c
#### Functions for adding, multiplying, squaring, and creating the juliamap for complex numbers.
### cplane.h
#### Header file with function definitions for cplane.c
### cplane.c
#### Function definitions needed for the a multidimensional array of complex values.
### julia.c
#### Function definitions needed to parse complex inputs for the cplane constructor.
### Makefile
#### Makefile to compile complex.c, cplane.c, and julia.c.
## <u>Cpp-Mandelbrot</u>
### cplane.hpp
#### Header file with function definitions for cplane.cpp
### cplane.cpp
#### Function definitions utilizing boost to store complex numbers for mandelbrot set
### julia.h
#### Header file with function definitions for julia.cpp
### julia.cpp
#### C++ function for juliamap.
### mandelbrot.cpp
#### Function definitions to generate the mandelbrot set.
## <u>Datasets</u>
### This folder contains several interesting plots and views of both mandelbrot set and julia set.  See data.md within this directory for additional detail.
#### juliaset_.25_.0015_zoom.jpg
#### juliaset_.25_.0015.jpg
#### juliaset_-.4_.6_zoom.jpg
#### juliaset_-.4_.6.jpg
#### mandelbrot.jpg
#### mandelbrot_zoom.jpg
#### mandelbrot_super_zoom.jpg



