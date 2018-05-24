// 1564349 川崎竜澄 2018/04/24
#include <stdio.h>
#include <math.h>

double calcHeikin(int, int, int);

int main(void) {
  int arraySize = 3;
  int point[arraySize];
  double heikin;

  printf("1回目の点数を入力してください\n");
  scanf("%d", &point[0]);
  printf("2回目の点数を入力してください\n");
  scanf("%d", &point[1]);
  printf("1回目の点数を入力してください\n");
  scanf("%d", &point[2]);

  heikin = calcHeikin(point[0], point[1], point[2]);

  printf("1回目 = %d点, 2回目 = %d点, 3回目 = %d点\n", point[0], point[1], point[2]);
  printf("平均点 = %lf点\n", heikin);

  return 0;
}

// 平均点を計算する関数
double calcHeikin(int point0, int point1, int point2) {
  double heikin;
  heikin = (point0 + point1 + point2) / 3.0;
  return heikin;
}

/*
❯❯ ./a.out                                                       (git)-[master]
1回目の点数を入力してください
81
2回目の点数を入力してください
95
1回目の点数を入力してください
71
1回目 = 81点, 2回目 = 95点, 3回目 = 71点
平均点 = 82.333333点
*/
