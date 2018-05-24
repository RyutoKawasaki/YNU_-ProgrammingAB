// 1564349 川崎竜澄 2018/04/24
#include <stdio.h>
#include <math.h>

double calcVelocity(double, double);
double calcHeight(double, double);

int main(void) {
  double v0, t, v, z;

  printf("初速度を入力してください\n");
  scanf("%lf", &v0);
  printf("時刻を入力してください\n");
  scanf("%lf", &t);

  v = calcVelocity(v0, t);
  z = calcHeight(v0, t);

  printf("その時点での速度vは %lf[m/s], 位置zは %lf[m]\n", v, z);
  return 0;
}

double calcVelocity(double initialVelocity, double t0){
  double velocity;
  double gravity = 9.8;
  velocity = initialVelocity - gravity * t0;
  return velocity;
}

double calcHeight(double initialVelocity, double t1){
  double height;
  double gravity = 9.8;
  height = (initialVelocity * t1) - (gravity * t1 * t1 / 2.0);
  return height;
}

/*
初速度を入力してください
100
時刻を入力してください
10
その時点での速度vは 2.000000[m/s], 位置zは 510.000000[m]
*/
