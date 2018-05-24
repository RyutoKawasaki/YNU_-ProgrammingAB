// 1564349 川崎竜澄 2018/05/22
#include <stdio.h>
#include <math.h>

int main(void) {
  int n;
  double a_new, a_old, sum;
  double epsilon = 5.0e-6;

  n = 0;
  sum = 0;
  a_new = 999.9;

  while(fabs(a_old - a_new) > epsilon) {
    n = n + 1;
    a_old = a_new;
    a_new = 2.0 / (3.0 - a_old);
    sum = sum + a_new;
    printf("a[%d] = %lf\n", n, a_new);
  }
  printf("最後に加えたa[n] = a[%d] = %lf, s = %lf\n", n, a_new, sum);

  return 0;
}
/*
a[1] = -0.002006
a[2] = 0.666221
a[3] = 0.856979
a[4] = 0.933262
a[5] = 0.967709
a[6] = 0.984111
a[7] = 0.992118
a[8] = 0.996074
a[9] = 0.998041
a[10] = 0.999022
a[11] = 0.999511
a[12] = 0.999756
a[13] = 0.999878
a[14] = 0.999939
a[15] = 0.999969
a[16] = 0.999985
a[17] = 0.999992
a[18] = 0.999996
最後に加えたa[n] = a[18] = 0.999996, s = 16.390557
*/
