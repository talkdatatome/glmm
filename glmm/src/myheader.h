
#ifndef GLMM_MYHEADER_H
#define GLMM_MYHEADER_H

#define BERNOULLI 1
#define POISSON 2

#include <R.h>
#include <R_ext/BLAS.h>

void cum3(double *etain, int *neta, int *typein, double *cumout);
void cp3(double *etain, int *neta, int *typein, double *cpout);
void cpp3(double *etain, int *neta, int *typein, double *cppout);

void matTvecmult(double *a, double *b, int *nrow, int *ncol, double *result);
void diag(double *invec, int *nrow, double *outmat);
void matTmatmult(double *a, double *b, int *nrowa, int *ncola, int *ncolb,
    double *c);
void matmatmult(double *a, double *b, int *nrowa, int *ncola, int *ncolb,
    double *c);
void matvecmult(double *a, double *b, int *nrow, int *ncol, double *result);
void identmat(int *nrow, int *diagmat);
void sumup(double *a, int *lena, double *suma);
void subvec(double *a, double *b, int *len, double *out);

#include <math.h>

#endif /* GLMM_MYHEADER_H */

