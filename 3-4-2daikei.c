// 1564349 川崎竜澄 2018/05/29
#include <stdio.h>
#include <math.h>

double calcfx(double);

int main(void) {
  int j, N;
  double a, b, h, x, S;

  a = 0;
  b = 1; // 積分範囲 a ~ b
  N = 10; // 分割数
  h = (b - a) / N;
  S = (calcfx(a) + calcfx(b)) / 2;
  for (j = 1; j < N; j++) {
    x = a + j * h;
    S = S + calcfx(x);
  }
  S = S * h;
  printf("分割数N = %dで sekibun = %15.10lf\n", N, S);
  return 0;
}

// fx計算する関数
double calcfx(double x) {
  double fx;
  fx = (2 * pow(x, 4)) + (4 * pow(x, 3)) - pow(x, 2) - 1;
  return fx;
}
/*
分割数N = 10で sekibun =    0.0816600000
分割数N = 100で sekibun =    0.0668166660
分割数N = 10000で sekibun =    0.0666666817
(3)手計算の結果 1 / 15 (0.06666666666666667)
*/
