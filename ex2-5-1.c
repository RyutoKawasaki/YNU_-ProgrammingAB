// 1564349 川崎竜澄 2018/05/15
#include <stdio.h>
#include <math.h>

double degreeToRadian(double);

int main(void) {
  double degree, sin_d, cos_d, tan_d;
  FILE *file1;
  file1 = fopen("out2-5-1.txt", "w");

  for (degree = 1; degree <= 180; degree++) {
    sin_d = sin(degreeToRadian(degree));
    cos_d = cos(degreeToRadian(degree));
    tan_d = tan(degreeToRadian(degree));
    fprintf(file1, "%lf %lf %lf %lf\n", degree, sin_d, cos_d, tan_d);
  }
  
  fclose(file1);
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
1.000000 0.017452 0.999848 0.017455
2.000000 0.034899 0.999391 0.034921
3.000000 0.052336 0.998630 0.052408
4.000000 0.069756 0.997564 0.069927
5.000000 0.087156 0.996195 0.087489
6.000000 0.104528 0.994522 0.105104
~
174.000000 0.104528 -0.994522 -0.105104
175.000000 0.087156 -0.996195 -0.087489
176.000000 0.069756 -0.997564 -0.069927
177.000000 0.052336 -0.998630 -0.052408
178.000000 0.034899 -0.999391 -0.034921
179.000000 0.017452 -0.999848 -0.017455
180.000000 0.000000 -1.000000 -0.000000
*/
