// 1564349 川崎竜澄 2018/04/24
#include <stdio.h>

int fileWrite(int, int, int, double);
double calcHeikin(int, int, int);

int main(void) {
  int arraySize = 3;
  int point[arraySize];
  int pointArrayCount;
  double heikin;

  char fileName[] = "in2-3-6.txt"; // 読み込むファイル名

  FILE *file1;
  file1 = fopen(fileName, "r");

  for(pointArrayCount = 0; pointArrayCount < arraySize; pointArrayCount++) {
    fscanf(file1, "%d\n", &point[pointArrayCount]);
  }
  fclose(file1);

  heikin = calcHeikin(point[0], point[1], point[2]);

  fileWrite(point[0], point[1], point[2], heikin);

  return 0;
}

// ファイル書き込みを行う関数
int fileWrite(int point0, int point1, int point2, double value){
  FILE *file1;
  file1 = fopen("out2-3-6.txt", "w");
  fprintf(file1, "%d\n%d\n%d\n%lf\n", point0, point1, point2, value);
  return 0;
}

// 平均点を計算する関数
double calcHeikin(int point0, int point1, int point2) {
  double heikin;
  heikin = (point0 + point1 + point2) / 3.0;
  return heikin;
}

/*
❯❯ cat in2-3-6.txt                                               (git)-[master]
81
95
71

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ cat out2-3-6.txt                                              (git)-[master]
81
95
71
82.333333
*/
