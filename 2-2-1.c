// 1564349 川崎竜澄 2018/04/10
#include <stdio.h>
#include <math.h>

int main(void) {
  // (1)
  float a_1;
  float b_1;
  a_1 = 2 / 3;
  b_1 = 2.0 / 3.0;
  printf("(1)\n");
  printf("(a)の場合 a = %f\n(b)の場合 a = %f\n", a_1, b_1);
  printf("2/3だと整数型となり小数点以下が切り捨てられるが、\n2.0/3.0だと実数型となり小数点以下は切り捨てられない\n");

  // (2)
  int a_2 = 5 / 3;
  float b_2 = 5.0 / 3;
  float c_2 = 5 / 3.0;
  int d_2 = 1 / 3;
  int e_2 = 5 % 3;
  printf("(2)\n");
  printf("(a) = %d\n(b) = %f\n(c) = %f\n(d) = %d\n(e) = %d\n", a_2, b_2, c_2, d_2, e_2);

  // (3)
  int a_3 = 3 * 2;
  int b_3 = pow(4, 2);
  int c_3 = 3 * 5 - 7 + 2;
  int d_3 = pow(2, 4) * 7 / 100;
  printf("(3)\n");
  printf("(a) = %d\n(b) = %d\n(c) = %d\n(d) = %d\n", a_3, b_3, c_3, d_3);

  // (4)
  int a_4 = 5 * 3 / 20 * 2;
  int b_4 = 5.0 * 3 / 20 * 2;
  int c_4 = 8 - 4 * 2 + 5 / 6;
  printf("(3)\n");
  printf("(a) = %d\n(b) = %d\n(c) = %d\n", a_3, b_3, c_3);
  return 0;
}
/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
% ./a.out                                                        (git)-[master]
(1)
(a)の場合 a = 0.000000
(b)の場合 a = 0.666667
2/3だと整数型となり小数点以下が切り捨てられるが、
2.0/3.0だと実数型となり小数点以下は切り捨てられない
(2)
(a) = 1
(b) = 1.666667
(c) = 1.666667
(d) = 0
(e) = 2
(3)
(a) = 6
(b) = 16
(c) = 10
(d) = 1
(3)
(a) = 6
(b) = 16
(c) = 10
*/
