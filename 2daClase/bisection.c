#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double);

int main() {

  int imax = 20, iter;
  double a = 1.0, b = 2.0, FA, TOL = 0.01, p, FP;

  iter = 1;
  FA = f(a);

  for (iter = 1; iter < imax; ++iter) {
    p = a + ((b - a) / 2);
    FP = f(p);
    printf("%d %f %f %f\n", iter, p, FP, (b - a) / 2.0);
    if (FP == 0 || ((b - a) / 2.0) < TOL) {
      printf("Raiz %1f \n", p);
    }
    if ((FA * FP) > 0) {
      a = p;
      FA = FP;
    } else{
      b = p;
    }
  }
  printf("Method failed after %i iterations\n", imax);
  return 0;
}

double f(double x) { return ((x * x) - 2); }