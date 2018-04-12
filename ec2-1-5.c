#include <stdio.h>
#include <math.h>

int main(void) {
  // float pi = 3.14;
  // float r = 4.0; // 整数含めて計算するときは.0
  // int seisu = 416;
  //
  // printf("%f\n", pi); // 実数 float は%f
  // printf("%d\n", seisu); // 整数 int は%d
  // printf("%f %d\n", pi, seisu);
  double pi = 3.1415926535;
  int pi2 = pi * 10000; // 10000倍して31415.の形に
  double pi3 = floor(pi2); // 小数点以下切り捨て

  // (1)
  printf("pi = %lf\n", pi); // doubleは %lf
  // (2)
  printf("pi = %.2lf\n", pi);// 桁数指定は %.桁数f
  // (3)
  printf("pi = %.2e\n", pi);// 累乗表す時は %e
  // (4)
  printf("pi = %8.4lf\n", pi3 / 10000);// 詰めるには %全体の幅.少数桁数f
  return 0;
}
