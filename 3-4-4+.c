// 1564349 川崎竜澄 2018/05/31
#include <stdio.h>
#include <math.h>

double calcfx(double);

int main(void) {
  int j, N;
  double a, b, h, x, S, Sb, eps;

  a = 0;
  b = 2; // 積分範囲 a ~ b
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
        S = S + calcfx(x);
    }
  }
  S = S * h;
  printf("分割数N = %dで sekibun = %15.10lf\n", N, S);
  return 0;
}

// fx計算する関数
double calcfx(double x) {
  double fx;
  fx = sqrt(4 - x * x);
  return fx;
}
/*
手計算の結果 3.141592653589793
分割数N = 536870912で sekibun =    3.1415926471
*/
