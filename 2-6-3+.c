#include <stdio.h>
#include <math.h>

int main(void) {
  int count;
  double date, sum, average, hensa, hensa_2zyo_sum, bunsan, hyojunHensa;
  char fileName[] = "Data_1.txt"; // 読み込むファイル名
  FILE *file1;
  file1 = fopen(fileName, "r");

  // 平均計算
  count = 0;
  sum = 0;
  while (fscanf(file1, "%lf\n", &date) != EOF) {
    count = count + 1;
    sum = sum + date;
    //printf("%lf\n",date);
  }
  fclose(file1);
  average = sum / count;

  // 標準偏差計算
  count = 0;
  hensa_2zyo_sum = 0;
  file1 = fopen(fileName, "r");
  while (fscanf(file1, "%lf\n", &date) != EOF) {
    count = count + 1;
    hensa = date - average;
    hensa_2zyo_sum = hensa_2zyo_sum + (hensa * hensa);
    //printf("偏差 = %lf, 偏差の2乗の合計 = %lf\n",hensa, hensa_2zyo_sum);
  }
  fclose(file1);
  bunsan = hensa_2zyo_sum / count;
  hyojunHensa = sqrt(bunsan);

  printf("データ数 = %d, 平均点 = %lf, 標準偏差＝%lf\n", count, average, hyojunHensa);
  printf("最後に加えたa_n = \n", );

  return 0;
}
