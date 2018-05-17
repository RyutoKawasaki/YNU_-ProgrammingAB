// 1564349 川崎竜澄 2018/05/17
#include <stdio.h>

double degreeToRadian(double);

int main(void) {
  int n, i;
  double x, ans, tmp;

  printf("項数nを入力してください。\n");
  scanf("%d", &n);
  printf("角度xを入力してください。\n");
  scanf("%lf", &x);

  ans = degreeToRadian(x);
  tmp = degreeToRadian(x);
  for(i = 1; i < n; i++) {
    tmp = tmp * (-1) * degreeToRadian(x) * degreeToRadian(x) / ((2.0 * i) * (2.0 * i + 1.0));
    ans = ans + tmp;
  }
  printf("sin(%f°) のマクローリン展開第%d項までの和は %f\n", x, n, ans);
  return 0;
}

// 角度(degree)からラジアン(radian)に変換する関数
double degreeToRadian(double degree) {
  double radian, pi;
  pi = 3.141592653589793;
  radian = degree * pi / 180.0;
  return radian;
}
