// 1564349 川崎竜澄 2018/05/22
#include <stdio.h>
#include <math.h>

int main(void) {
  int n;
  double a, sum;
  double e = M_E;
  double epsilon = 5.0e-8;

  n = 0;
  a = 1.0;
  sum = 1.0;
  while(fabs(a) > epsilon) {
    n = n + 1;
    a = a/ n;
    sum = sum + a;
    printf("n = %2d のとき a[%d] = %10e, sum = %10e\n", n, n, a, sum);
  }

  printf("M_E = %lf, 計算で出したe = %lf\n", e, sum);

  return 0;
}
/*
n =  1 のとき a[1] = 1.000000e+00, sum = 2.000000e+00
n =  2 のとき a[2] = 5.000000e-01, sum = 2.500000e+00
n =  3 のとき a[3] = 1.666667e-01, sum = 2.666667e+00
n =  4 のとき a[4] = 4.166667e-02, sum = 2.708333e+00
n =  5 のとき a[5] = 8.333333e-03, sum = 2.716667e+00
n =  6 のとき a[6] = 1.388889e-03, sum = 2.718056e+00
n =  7 のとき a[7] = 1.984127e-04, sum = 2.718254e+00
n =  8 のとき a[8] = 2.480159e-05, sum = 2.718279e+00
n =  9 のとき a[9] = 2.755732e-06, sum = 2.718282e+00
n = 10 のとき a[10] = 2.755732e-07, sum = 2.718282e+00
n = 11 のとき a[11] = 2.505211e-08, sum = 2.718282e+00
M_E = 2.718282, 計算で出したe = 2.718282
*/
