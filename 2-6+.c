// 1564349 川崎竜澄 2018/05/22
#include <stdio.h>
#include <math.h>

int main(void) {
  int count;
  double date, sum, average, hensa, hensa_2zyo_sum, bunsan, hyojunHensa;
  char fileName[] = "Data_2.txt"; // 読み込むファイル名
  FILE *file1;
  file1 = fopen(fileName, "r");

  // 平均計算
  count = 0;
  sum = 0;
  while (fscanf(file1, "%lf ", &date) != EOF) {
    count = count + 1;
    if (count % 2 == 0) {
      sum = sum + date;
    }
  }
  fclose(file1);
  average = sum / count / 2.0;

  // 標準偏差計算
  count = 0;
  hensa_2zyo_sum = 0;
  file1 = fopen(fileName, "r");
  while (fscanf(file1, "%lf\n", &date) != EOF) {
    count = count + 1;
    if (count % 2 == 0) {
      hensa = date - average;
      hensa_2zyo_sum = hensa_2zyo_sum + (hensa * hensa);
    }
    //printf("偏差 = %lf, 偏差の2乗の合計 = %lf\n",hensa, hensa_2zyo_sum);
  }
  fclose(file1);
  bunsan = hensa_2zyo_sum / count / 2;
  hyojunHensa = sqrt(bunsan);

  printf("行数n = %d, 平均値 = %lf, 標準偏差＝%lf\n", count / 2, average, hyojunHensa);

  return 0;
}
/*
行数n = 5174, 平均値 = 0.040269, 標準偏差＝1.637358
*/
