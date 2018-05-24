// 1564349 川崎竜澄 2018/05/24
#include <stdio.h>

int main(void) {
  int n;
  double tmp, sum;
  n = 0;
  tmp = 0;
  sum = 0;

  while(sum < 12) {
    n = n + 1;
    tmp = 1 / (double)n;
    sum = sum + tmp;
  }
  printf("k = %d, S_k = %lf, S_k-1 = %lf\n", n, sum, sum - tmp);

  return 0;
}
/*
❯❯ ./a.out                                                       (git)-[master]
k = 91380, S_k = 12.000003, S_k-1 = 11.999992
*/
