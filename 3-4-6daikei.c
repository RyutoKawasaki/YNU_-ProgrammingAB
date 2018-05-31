// 1564349 川崎竜澄 2018/05/29
#include <stdio.h>
#include <math.h>

double calcfx(double);

int main(void) {
  int j, N;
  double a, b, h, x, S;

  a = 0;
  b = 2; // 積分範囲 a ~ b
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
  fx = sqrt(4 - x * x);
  return fx;
}
/*
分割数N = 10で sekibun =    3.1045183262
分割数N = 100で sekibun =    3.1404170318
分割数N = 10000で sekibun =    3.1415914776
手計算の結果 3.141592653589793
*/
