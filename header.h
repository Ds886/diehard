
#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIM       4096
#define UNIMAX    4294967296.   /*pow(2,32)*/

typedef unsigned int    uniform;    

typedef unsigned long   counter;

typedef double          real;

uniform uni(char *filename);

double Phi(double z);

double Chisq(int df, double chsq);

double Poisson(double lambda, int k);

real KStest(real *x, int dim);

#endif /*_HEADER_H_*/


// Ds886 fixed to build
void bday(char *filename);
void operm5(char *filename);
void binrnk(char *filename, char *test);
void bitst(char *filename);
void monky(char *filename, char *test);
void park(char *filename);
void mindist(char *filename);
void sphere(char *filename);
void squeez(char *filename);
void osum(char *filename);
void runtest(char *filename);
void craptest(char *filename);
#include <string.h>




