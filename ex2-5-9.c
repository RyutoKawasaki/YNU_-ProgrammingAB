// 1564349 川崎竜澄 2018/05/17
#include <stdio.h>

int main(void) {
  int n, i, studentNumberUnder2;
  double x[3] = {0, 0, 1};
  double a, b, sum;

  n = 10;
  studentNumberUnder2 = 49;
  a = 1.0;
  b = 2.0 / studentNumberUnder2;

  for(i = 1; i <= n; ++ i) {
    
    if (i == 1 || i == 2) {
      sum = x[0] + x[1] + x[2];
      printf("n = %d のとき x = %lf\n", i, sum);

    } else {
      x[2] = x[2] + x[1];
      x[1] = x[0] * a;
      x[0] = x[2] * b;
      sum = x[0] + x[1] + x[2];
      printf("n = %d のとき x = %lf\n", i, sum);
    }
  }
  return 0;
}
/*
❯❯ ./a.out                                                       (git)-[master]
n = 1 のとき x = 1.000000
n = 2 のとき x = 1.000000
n = 3 のとき x = 1.040816
n = 4 のとき x = 1.081633
n = 5 のとき x = 1.124115
n = 6 のとき x = 1.168263
n = 7 のとき x = 1.214145
n = 8 のとき x = 1.261830
n = 9 のとき x = 1.311387
n = 10 のとき x = 1.362890
*/
