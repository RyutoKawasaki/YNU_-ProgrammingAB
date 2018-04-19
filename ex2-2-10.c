// 1564349 川崎竜澄 2018/04/17
// 提出とのこと見逃していたので提出させていただきます。
#include <stdio.h>
#include <math.h>

double degreeToRadian(double); // プロトタイプ宣言 戻り値の型 関数名(引数の型);

int main(void) {
  double degree, sin_d, cos_d, tan_d;
  printf("sin, cos, tanの値を求めたい角度を入力してください\n");
  scanf("%lf", &degree);
  sin_d = sin(degreeToRadian(degree));
  cos_d = cos(degreeToRadian(degree));
  tan_d = tan(degreeToRadian(degree));

  printf("角度：%lfで\n", degree);
  printf("sin = %lf\ncos = %lf\ntan = %lf", sin_d, cos_d, tan_d);

  // double one, two, three_sin, three_cos;
  // one = exp(2.0 / 3.0);
  // two = tan(degreeToRadian(40.0));
  // three_sin = sin(degreeToRadian(50.0));
  // three_cos = cos(degreeToRadian(50.0));
  //
  // printf("(1) = %lf\n(2) = %lf\n(3)sin = %lf, cos = %lf\n\n",one, two, three_sin, three_cos);
  return 0;
}

// 角度(degree)からラジアン(radian)に変換する関数
double degreeToRadian(double degree) {
  double radian, pi;
  pi = 3.141592653589793;
  radian = degree * pi / 180.0;
  return radian;
}
/*
sin, cos, tanの値を求めたい角度を入力してください
40
角度：40.000000で
sin = 0.642788
cos = 0.766044
tan = 0.839100
*/
