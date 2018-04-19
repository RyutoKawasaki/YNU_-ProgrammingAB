// 1564349 川崎竜澄 2018/04/17
// 時間内には完成できませんでしたが、訂正したのでこちらも提出させていただきます。
#include <stdio.h>
#include <math.h>

int fileWrite(double, double, double, double, double, double, double);
double calcHeikin(int, int, int, int, int);
double calcHyojunHensa(int, int, int, int, int);
double calcHensati(int, int, int, int, int, double*, double*, double*, double*, double*);

int main(void) {
  int arraySize = 5;
  int point[arraySize];
  double heikin, hyojunHensa, hensaiti0, hensaiti1, hensaiti2, hensaiti3, hensaiti4;

  printf("Aの点数を入力してください\n");
  scanf("%d", &point[0]);

  printf("Bの点数を入力してください\n");
  scanf("%d", &point[1]);

  printf("Cの点数を入力してください\n");
  scanf("%d", &point[2]);

  printf("Dの点数を入力してください\n");
  scanf("%d", &point[3]);

  printf("Eの点数を入力してください\n");
  scanf("%d", &point[4]);

  heikin = calcHeikin(point[0], point[1], point[2], point[3], point[4]);
  hyojunHensa = calcHyojunHensa(point[0], point[1], point[2], point[3], point[4]);
  calcHensati(point[0], point[1], point[2], point[3], point[4], &hensaiti0, &hensaiti1, &hensaiti2, &hensaiti3, &hensaiti4);

  printf("A = %d点, B = %d点, C = %d点, D = %d点, E = %d点\n", point[0], point[1], point[2], point[3], point[4]);
  printf("平均点 = %lf点, 標準偏差　= %lf\n", heikin, hyojunHensa);
  printf("Aの偏差値 = %lf\nBの偏差値 = %lf\nCの偏差値 = %lf\nDの偏差値 = %lf\nEの偏差値 = %lf\n", hensaiti0, hensaiti1, hensaiti2, hensaiti3, hensaiti4);

  fileWrite(heikin, hyojunHensa, hensaiti0, hensaiti1, hensaiti2, hensaiti3, hensaiti4);

  return 0;
}

// ファイル書き込みを行う関数
int fileWrite(double writeValue0, double writeValue1, double hensaiti0, double hensaiti1, double hensaiti2, double hensaiti3, double hensaiti4){
  FILE *file1;
  file1 = fopen("out2-3-11.txt", "w");
  fprintf(file1, "%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n", writeValue0, writeValue1, hensaiti0, hensaiti1, hensaiti2, hensaiti3, hensaiti4);
  return 0;
}

// 平均点を計算する関数
double calcHeikin(int point0, int point1, int point2, int point3, int point4) {
  double heikin;
  heikin = (point0 + point1 + point2 + point3 + point4) / 5;
  return heikin;
}

// 標準偏差を計算する関数
double calcHyojunHensa(int point0, int point1, int point2, int point3, int point4) {
  double heikin, hensa[5], bunsan, hyojunHensa;

  heikin = (point0 + point1 + point2 + point3 + point4) / 5;

  hensa[0] = point0 - heikin;
  hensa[1] = point1 - heikin;
  hensa[2] = point2 - heikin;
  hensa[3] = point3 - heikin;
  hensa[4] = point4 - heikin;

  bunsan = (hensa[0] * hensa[0] + hensa[1] * hensa[1] + hensa[2] * hensa[2] + hensa[3] * hensa[3] + hensa[4] * hensa[4]) / 5;
  hyojunHensa = sqrt(bunsan);
  return hyojunHensa;
}

// 偏差値を計算する関数
double calcHensati(int point0, int point1, int point2, int point3, int point4, double* hensati0, double* hensati1, double* hensati2, double* hensati3, double* hensati4) {
  double heikin, hensa[5], bunsan, hyojunHensa;

  heikin = (point0 + point1 + point2 + point3 + point4) / 5;

  hensa[0] = point0 - heikin;
  hensa[1] = point1 - heikin;
  hensa[2] = point2 - heikin;
  hensa[3] = point3 - heikin;
  hensa[4] = point4 - heikin;

  bunsan = (hensa[0] * hensa[0] + hensa[1] * hensa[1] + hensa[2] * hensa[2] + hensa[3] * hensa[3] + hensa[4] * hensa[4]) / 5;
  hyojunHensa = sqrt(bunsan);

  if(point0 > heikin || point0 < heikin) {
    *hensati0 = 50 + (hensa[0] * 10 / hyojunHensa);
  } else {
    *hensati0 = 50;
  }

  if(point1 > heikin || point1 < heikin) {
    *hensati1 = 50 + (hensa[1] * 10 / hyojunHensa);
  } else {
    *hensati1 = 50;
  }

  if(point2 > heikin || point2 < heikin) {
    *hensati2 = 50 + (hensa[2] * 10 / hyojunHensa);
  } else {
    *hensati2 = 50;
  }

  if(point3 > heikin || point3 < heikin) {
    *hensati3 = 50 + (hensa[3] * 10 / hyojunHensa);
  } else {
    *hensati3 = 50;
  }

  if(point4 > heikin || point4 < heikin) {
    *hensati4 = 50 + (hensa[4] * 10 / hyojunHensa);
  } else {
    *hensati4 = 50;
  }

  return 0;
}

/*                                                     (git)-[master]
Aの点数を入力してください
98
Bの点数を入力してください
39
Cの点数を入力してください
62
Dの点数を入力してください
83
Eの点数を入力してください
71
A = 98点, B = 39点, C = 62点, D = 83点, E = 71点
平均点 = 70.000000点, 標準偏差　= 19.894723
Aの偏差値 = 64.074084
Bの偏差値 = 34.417979
Cの偏差値 = 45.978833
Dの偏差値 = 56.534396
Eの偏差値 = 50.502646

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ cat out2-3-11.txt                                             (git)-[master]
70.000000
19.894723
64.074084
34.417979
45.978833
56.534396
50.502646
*/
