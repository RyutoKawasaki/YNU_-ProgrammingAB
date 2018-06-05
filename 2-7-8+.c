#include <stdio.h>
#include <math.h>

int bigger(double, double);
double calcSolution1(double, double, double);
double calcSolution2(double, double, double);

int main(void) {
  double a, b, c;
  double x1, x2;

  printf("実数aを入力してください\n");
  scanf("%lf", &a);
  printf("実数bを入力してください\n");
  scanf("%lf", &b);
  printf("実数cを入力してください\n");
  scanf("%lf", &c);

  printf("a = %lf, b = %lf, c = %lfのとき\n", a, b, c);
  printf("2次方程式 ax^2 + bx + c = 0 は\n");

  if (bigger(b * b, 4 * a * c) == 0) {
    x1 = calcSolution1(a, b, c);
    printf("b×b(%lf) ≒ 4ac(%lf)より D ≒ 0 なので 1つの重解を持つ\n", b * b, 4 * a * c);
    printf("実数解は %lf\n", x1);

  } else if (bigger(b * b, 4 * a * c) == 1) {
    x1 = calcSolution1(a, b, c);
    x2 = calcSolution2(a, b, c);
    printf("b×b(%lf) > 4ac(%lf)より D > 0 なので 2つの実数解を持つ\n", b * b, 4 * a * c);
    printf("実数解は %lf と %lf\n", x1, x2);

  } else {
    printf("b×b(%lf) < 4ac(%lf)より D < 0 なので 複素数解を持つ\n", b * b, 4 * a * c);
    printf("複素数解は %lf + %lfi と %lf - %lfi\n", (-b / 2 * a), sqrt(- (b * b - 4 * a * c)) / 2, (-b / 2 * a), sqrt(- (b * b - 4 * a * c)) / 2);
  }

  return 0;
}


int bigger(double x, double y) {
  int int0or1or2;
  double epsilon = 5.0e-8;

  if (fabs(x - y) <= epsilon) {
    int0or1or2 = 0;
  } else if (x - y > epsilon) {
    int0or1or2 = 1;
  } else {
    int0or1or2 = 2;
  }
  return int0or1or2;
}

double calcHanbetsu(double a, double b, double c) {
  double D;
  D = b * b - 4 * a * c;
  return D;
}

double calcSolution1(double a, double b, double c) {
  double Solution1;
  Solution1 = (- b + sqrt(b * b - 4  * a * c)) / (2 * a);
  return Solution1;
}

double calcSolution2(double a, double b, double c) {
  double Solution2;
  Solution2 = (- b - sqrt(b * b - 4  * a * c)) / (2 * a);
  return Solution2;
}


/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
7
実数bを入力してください
1
実数cを入力してください
3
a = 7.000000, b = 1.000000, c = 3.000000のとき
2次方程式 ax^2 + bx + c = 0 は
b×b(1.000000) < 4ac(84.000000)より D < 0 なので 複素数解を持つ
複素数解は -3.500000 + 4.555217i と -3.500000 - 4.555217i

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
1
実数bを入力してください
9
実数cを入力してください
2
a = 1.000000, b = 9.000000, c = 2.000000のとき
2次方程式 ax^2 + bx + c = 0 は
b×b(81.000000) > 4ac(8.000000)より D > 0 なので 2つの実数解を持つ
実数解は -0.227998 と -8.772002

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
1
実数bを入力してください
10
実数cを入力してください
25
a = 1.000000, b = 10.000000, c = 25.000000のとき
2次方程式 ax^2 + bx + c = 0 は
b×b(100.000000) ≒ 4ac(100.000000)より D ≒ 0 なので 1つの重解を持つ
実数解は -5.000000
*/
