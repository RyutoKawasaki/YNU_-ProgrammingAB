#include <stdio.h>

double calcfx(double);

int main(void) {
  int j, N;
  double a, b, h, x, S;

  a = 0;
  b = 1; // 積分範囲 a ~ b
  N = 10; // 分割数
  h = (b - a) / N;
  S = calcfx(a) + calcfx(b);
  for (j = 1; j < N; j++) {
    x = a + j * h;

    if (j % 2 == 0) {
      S = S + 2 * calcfx(x);
    } else {
      S = S + 4 * calcfx(x);
    }
  }
  S = S * h / 3;
  printf("sekibun = %15.11lf\n", S);
  return 0;
}

// fx計算する関数
double calcfx(double x) {
  double fx;
  fx = x * x;
  return fx;
}
