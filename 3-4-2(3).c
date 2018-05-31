// 1564349 川崎竜澄 2018/05/29
#include <stdio.h>
#include <math.h>

int main(void) {
  int j, N;
  double a, b, h, x, fx, S;

  a = 0;
  b = 1; // 積分範囲 a ~ b
  N = 10000; // 分割数
  h = (b - a) / N;
  S = 0;
  for (j = 0; j < N; j++) {
    x = a + j * h;
    fx = (2 * pow(x, 4)) + (4 * pow(x, 3)) - pow(x, 2) - 1;
    S = S + h * fx;
  }
  printf("分割数N = %dで sekibun = %f\n", N, S);
  return 0;
}
/*
分割数N = 10で sekibun = -0.168340
分割数N = 100で sekibun = 0.041817
分割数N = 10000で sekibun = 0.066417
*/
