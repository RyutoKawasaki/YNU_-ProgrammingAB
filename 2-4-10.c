// 1564349 川崎竜澄 2018/05/08
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcHanbetsu(double, double, double);
double calcSolution0(double, double, double);
double calcSolution1(double, double, double);

int main(void) {
  double a, b, c, D;
  double x1, x2;
  double epsilon = 5.0e-8;

  // 係数入力
  printf("実数aを入力してください\n");
  scanf("%lf", &a);
  printf("実数bを入力してください\n");
  scanf("%lf", &b);
  printf("実数cを入力してください\n");
  scanf("%lf", &c);

  // 判別式計算
  D = calcHanbetsu(a, b, c);
  printf("a = %lf, b = %lf, c = %lfのとき\n", a, b, c);
  printf("2次方程式 ax^2 + bx + c = 0 は\n\n");

  // 判別式の値で場合分け
  if (D > epsilon) {
    x1 = calcSolution0(a, b, c);
    x2 = calcSolution1(a, b, c);
    printf("判別式D = %f > %lf より two real solutions\n", D, epsilon);
    printf("実数解は %lf と %lf\n", x1, x2);

  } else if (fabs(D) < epsilon) { // 絶対値はabs, fabs
    x1 = calcSolution0(a, b, c);
    printf("判別式D = %lf = %lf より a real solutions\n", D, epsilon);
    printf("実数解は %lf\n", x1);

  } else {
    printf("判別式D = %lf < %lf より two complex solutions\n", D, epsilon);
    printf("複素数解は %lf + %lfi と %lf - %lfi\n", (-b / 2 * a), sqrt(-D) / 2, (-b / 2 * a), sqrt(-D) / 2);

  }
  return 0;
}

double calcHanbetsu(double a0, double b0, double c0) {
  double D;
  D = b0 * b0 - 4 * a0 * c0;
  return D;
}

double calcSolution0(double a1, double b1, double c1) {
  double Solution0;
  Solution0 = (- b1 + sqrt(b1 * b1 - 4  * a1 * c1)) / (2 * a1);
  return Solution0;
}

double calcSolution1(double a2, double b2, double c2) {
  double Solution1;
  Solution1 = (- b2 - sqrt(b2 * b2 - 4  * a2 * c2)) / (2 * a2);
  return Solution1;
}

/*
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
4.0
実数bを入力してください
-5.0
実数cを入力してください
1.0
a = 4.000000, b = -5.000000, c = 1.000000のとき
2次方程式 ax^2 + bx + c = 0 は

判別式D = 9.000000 > 0.000000 より two real solutions
実数解は 1.000000 と 0.250000

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
1.0
実数bを入力してください
-4.0
実数cを入力してください
4.0
a = 1.000000, b = -4.000000, c = 4.000000のとき
2次方程式 ax^2 + bx + c = 0 は

判別式D = 0.000000 = 0.000000 より a real solutions
実数解は 2.000000

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
1.0
実数bを入力してください
-2.0
実数cを入力してください
2.0
a = 1.000000, b = -2.000000, c = 2.000000のとき
2次方程式 ax^2 + bx + c = 0 は

判別式D = -4.000000 < 0.000000 より two complex solutions
複素数解は 1.000000 + 1.000000i と 1.000000 - 1.000000i
*/
