#include <stdio.h>
#include <math.h>

int bigger(double, double);

int main(void) {
  double x, y;

  printf("実数xを入力してください\n");
  scanf("%lf", &x);
  printf("実数yを入力してください\n");
  scanf("%lf", &y);

  if (bigger(x, y) == 0) {
    printf("%lf ≒ %lf\n", x, y);
  } else if (bigger(x, y) == 1) {
    printf("%lf > %lf\n", x, y);
  } else {
    printf("%lf < %lf\n", x, y);
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


/*
実数xを入力してください
4
実数yを入力してください
2
4.000000 > 2.000000

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数xを入力してください
5
実数yを入力してください
5.000000000000000000001
5.000000 ≒ 5.000000

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
実数xを入力してください
3
実数yを入力してください
6
3.000000 < 6.000000
*/
