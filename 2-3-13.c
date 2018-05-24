// 1564349 川崎竜澄 2018/04/24
#include <stdio.h>
#include <math.h>

int calcHanbetsu(int, int, int);
double calcSolution0(int, int, int);
double calcSolution1(int, int, int);

int main(void) {
  int a, b, c, D;
  double x1, x2;

  printf("実数aを入力してください\n");
  scanf("%d", &a);
  printf("実数bを入力してください\n");
  scanf("%d", &b);
  printf("実数cを入力してください\n");
  scanf("%d", &c);

  D = calcHanbetsu(a, b, c);
  printf("a = %d, b = %d, c = %dのとき\n", a, b, c);
  printf("2次方程式 ax^2 + bx + c = 0 は\n\n");

  if (D > 0) {
    x1 = calcSolution0(a, b, c);
    x2 = calcSolution1(a, b, c);
    printf("判別式D = %d > 0 より実数解を2つもつ\n", D);
    printf("実数解は %lf と %lf\n", x1, x2);

  } else if (D < 0){
    printf("判別式D = %d < 0 より実数解をもたない\n", D);

  } else {
    x1 = calcSolution0(a, b, c);
    printf("判別式D = %d = 0 より実数解を1つもつ\n", D);
    printf("実数解は %lf\n", x1);
  }

  return 0;
}

int calcHanbetsu(int a0, int b0, int c0) {
  int D;
  D = b0 * b0 - 4 * a0 * c0;
  return D;
}

double calcSolution0(int a1, int b1, int c1) {
  double Solution0;
  Solution0 = (- b1 + sqrt(b1 * b1 - 4  * a1 * c1)) / (2 * a1);
  return Solution0;
}

double calcSolution1(int a2, int b2, int c2) {
  double Solution1;
  Solution1 = (- b2 - sqrt(b2 * b2 - 4  * a2 * c2)) / (2 * a2);
  return Solution1;
}

/*
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
1
実数bを入力してください
3
実数cを入力してください
7
a = 1, b = 3, c = 7のとき
2次方程式 ax^2 + bx + c = 0 は

判別式D = -19 < 0 より実数解をもたない

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数aを入力してください
1
実数bを入力してください
7
実数cを入力してください
3
a = 1, b = 7, c = 3のとき
2次方程式 ax^2 + bx + c = 0 は

判別式D = 37 > 0 より実数解を2つもつ
実数解は -0.458619 と -6.541381
*/
