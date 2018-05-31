#include <stdio.h>

int main(void) {
  int j, N;
  double a, b, h, x, S;

  a = 0;
  b = 1; // 積分範囲 a ~ b
  N = 100; // 分割数
  h = (b - a) / N;
  S = 0;
  for (j = 0; j < N; j++) {
    x = a + j * h;
    S = S + h * x * x;
  }
  printf("sekibun = %lf\n", S);
  return 0;
}
/*
sekibun = 0.328350
*/
