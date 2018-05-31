#include <stdio.h>

int main(void) {
  int j, N;
  double a, b, h, x, S;

  a = 0;
  b = 1; // 積分範囲 a ~ b
  N = 100; // 分割数
  h = (b - a) / N;
  S = (a * a + b * b) / 2;
  for (j = 1; j < N; j++) {
    x = a + j * h;
    S = S + h * x * x;
  }
  S = S * h;
  printf("sekibun = %lf\n", S);
  return 0;
}
