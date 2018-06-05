#include <stdio.h>
#include <stdlib.h>

int rand0to100(void);
double calcAverage(int, int);

int main(void) {
  srand(1564349);
  int n, k;
  n = 21;
  k = 5;

  printf("平均値 = %lf\n", calcAverage(n, k));
  return 0;
}

int rand0to100(void) {
    return rand() % 101;
}

double calcAverage(int n, int k) {
  int count, tmp;
  double sum, average;
  sum = 0;

  for (count = 1; count <= n; count++) {
    if (count % k == 0) {
      tmp = rand0to100();
      sum = sum + tmp;
      printf("%3d\n", tmp);
    } else {
      tmp = rand0to100();
      sum = sum + tmp;
      printf("%3d ", tmp);
    }
  }
  printf("\n");

  average = sum / ((double)count - 1);
  return average;
}
/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
 85  15  91 100  69
 98  93  76  68   6
 29  92  51  70 100
 29  80   8  68  32
 49
平均値 = 62.333333
*/
