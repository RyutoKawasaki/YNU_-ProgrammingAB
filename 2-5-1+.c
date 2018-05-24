// 1564349 川崎竜澄 2018/05/15
#include <stdio.h>
#include <math.h>

double degreeToRadian(double);

int main(void) {
  int studentNumber;
  int under2, under4, upper2;
  double degree, degreeWidth;
  double sin_d, cos_d, tan_d;

  printf("学籍番号を入力してください\n");
  scanf("%d", &studentNumber);

  under2 = studentNumber % 100;
  under4 = studentNumber % 10000;
  upper2 = under4 / 100;

  if (under2 > upper2) {
    degreeWidth = (under2 - upper2) / 15.0;
    for (degree = upper2; degree <= under2; degree = degree + degreeWidth) {
      sin_d = sin(degreeToRadian(degree));
      cos_d = cos(degreeToRadian(degree));
      tan_d = tan(degreeToRadian(degree));

      printf("角度 = %lf°のとき\n", degree);
      printf("sin = %lf\ncos = %lf\ntan = %lf\n", sin_d, cos_d, tan_d);
      printf("------------------------------\n");
    }

  } else if (upper2 > under2) {
    degreeWidth = (upper2 - under2) / 15.0;
    for (degree = under2; degree <= upper2; degree = degree + degreeWidth) {
      sin_d = sin(degreeToRadian(degree));
      cos_d = cos(degreeToRadian(degree));
      tan_d = tan(degreeToRadian(degree));

      printf("角度 = %lf°のとき\n", degree);
      printf("sin = %lf\ncos = %lf\ntan = %lf\n", sin_d, cos_d, tan_d);
      printf("------------------------------\n");
    }

  } else {
    printf("エラー");
  }

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
学籍番号を入力してください
1564349
角度 = 43.000000°のとき
sin = 0.681998
cos = 0.731354
tan = 0.932515
------------------------------
角度 = 43.400000°のとき
sin = 0.687088
cos = 0.726575
tan = 0.945653
------------------------------
角度 = 43.800000°のとき
sin = 0.692143
cos = 0.721760
tan = 0.958966
------------------------------
角度 = 44.200000°のとき
sin = 0.697165
cos = 0.716911
tan = 0.972458
------------------------------
角度 = 44.600000°のとき
sin = 0.702153
cos = 0.712026
tan = 0.986134
------------------------------
角度 = 45.000000°のとき
sin = 0.707107
cos = 0.707107
tan = 1.000000
------------------------------
角度 = 45.400000°のとき
sin = 0.712026
cos = 0.702153
tan = 1.014061
------------------------------
角度 = 45.800000°のとき
sin = 0.716911
cos = 0.697165
tan = 1.028323
------------------------------
角度 = 46.200000°のとき
sin = 0.721760
cos = 0.692143
tan = 1.042790
------------------------------
角度 = 46.600000°のとき
sin = 0.726575
cos = 0.687088
tan = 1.057470
------------------------------
角度 = 47.000000°のとき
sin = 0.731354
cos = 0.681998
tan = 1.072369
------------------------------
角度 = 47.400000°のとき
sin = 0.736097
cos = 0.676876
tan = 1.087492
------------------------------
角度 = 47.800000°のとき
sin = 0.740805
cos = 0.671721
tan = 1.102846
------------------------------
角度 = 48.200000°のとき
sin = 0.745476
cos = 0.666532
tan = 1.118439
------------------------------
角度 = 48.600000°のとき
sin = 0.750111
cos = 0.661312
tan = 1.134277
------------------------------
角度 = 49.000000°のとき
sin = 0.754710
cos = 0.656059
tan = 1.150368
------------------------------

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
学籍番号を入力してください
1765432
角度 = 32.000000°のとき
sin = 0.529919
cos = 0.848048
tan = 0.624869
------------------------------
角度 = 33.466667°のとき
sin = 0.551452
cos = 0.834207
tan = 0.661049
------------------------------
角度 = 34.933333°のとき
sin = 0.572623
cos = 0.819819
tan = 0.698475
------------------------------
角度 = 36.400000°のとき
sin = 0.593419
cos = 0.804894
tan = 0.737264
------------------------------
角度 = 37.866667°のとき
sin = 0.613826
cos = 0.789441
tan = 0.777545
------------------------------
角度 = 39.333333°のとき
sin = 0.633831
cos = 0.773472
tan = 0.819463
------------------------------
角度 = 40.800000°のとき
sin = 0.653421
cos = 0.756995
tan = 0.863177
------------------------------
角度 = 42.266667°のとき
sin = 0.672582
cos = 0.740023
tan = 0.908867
------------------------------
角度 = 43.733333°のとき
sin = 0.691303
cos = 0.722565
tan = 0.956734
------------------------------
角度 = 45.200000°のとき
sin = 0.709571
cos = 0.704634
tan = 1.007006
------------------------------
角度 = 46.666667°のとき
sin = 0.727374
cos = 0.686242
tan = 1.059938
------------------------------
角度 = 48.133333°のとき
sin = 0.744700
cos = 0.667399
tan = 1.115823
------------------------------
角度 = 49.600000°のとき
sin = 0.761538
cos = 0.648120
tan = 1.174996
------------------------------
角度 = 51.066667°のとき
sin = 0.777878
cos = 0.628416
tan = 1.237839
------------------------------
角度 = 52.533333°のとき
sin = 0.793707
cos = 0.608300
tan = 1.304796
------------------------------

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
学籍番号を入力してください
1863456
角度 = 34.000000°のとき
sin = 0.559193
cos = 0.829038
tan = 0.674509
------------------------------
角度 = 35.466667°のとき
sin = 0.580229
cos = 0.814453
tan = 0.712416
------------------------------
角度 = 36.933333°のとき
sin = 0.600885
cos = 0.799335
tan = 0.751731
------------------------------
角度 = 38.400000°のとき
sin = 0.621148
cos = 0.783693
tan = 0.792590
------------------------------
角度 = 39.866667°のとき
sin = 0.641003
cos = 0.767538
tan = 0.835142
------------------------------
角度 = 41.333333°のとき
sin = 0.660439
cos = 0.750880
tan = 0.879553
------------------------------
角度 = 42.800000°のとき
sin = 0.679441
cos = 0.733730
tan = 0.926010
------------------------------
角度 = 44.266667°のとき
sin = 0.697999
cos = 0.716099
tan = 0.974724
------------------------------
角度 = 45.733333°のとき
sin = 0.716099
cos = 0.697999
tan = 1.025931
------------------------------
角度 = 47.200000°のとき
sin = 0.733730
cos = 0.679441
tan = 1.079902
------------------------------
角度 = 48.666667°のとき
sin = 0.750880
cos = 0.660439
tan = 1.136941
------------------------------
角度 = 50.133333°のとき
sin = 0.767538
cos = 0.641003
tan = 1.197402
------------------------------
角度 = 51.600000°のとき
sin = 0.783693
cos = 0.621148
tan = 1.261686
------------------------------
角度 = 53.066667°のとき
sin = 0.799335
cos = 0.600885
tan = 1.330262
------------------------------
角度 = 54.533333°のとき
sin = 0.814453
cos = 0.580229
tan = 1.403675
------------------------------
*/