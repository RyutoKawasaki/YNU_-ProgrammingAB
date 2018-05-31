#include <stdio.h>
#include <math.h>

double calcfx(double);

int main(void) {
  int j, N;
  double a, b, h, x, S, Sb, eps;

  a = 0;
  b = 1; // 積分範囲 a ~ b
  N = 2; // 分割数
  h = (b - a) / N;
  eps = 1e-8;
  S = (calcfx(a) + calcfx(b)) / 2.0;
  Sb = 0;
  while (fabs(S * h - Sb * 2 * h) > eps) {
    Sb = S;
    N = N * 2;
    h = h / 2;
    for(j = 0; j < N / 2; j++) {
        x = a + (2 * j + 1)* h;
        S = S + x * x;
    }
  }
  printf("sekibun = %lf\n", S * h);
  return 0;
}

// fx計算する関数
double calcfx(double x) {
  double fx;
  fx = x * x;
  return fx;
}
