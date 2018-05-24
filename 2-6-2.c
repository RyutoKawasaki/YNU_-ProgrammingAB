#include <stdio.h>
#include <math.h>

int main(void) {

  int n;
  float x, sum;
  n = 0;
  sum = 0.0;

  do {
    scanf("%f\n", &x);
    n ++;
    sum = sum + x;
  } while(x > 0);
  printf("Record = %d\n", n);
  printf("Average = %f\n", sum / n);


  int count;
  double date, sum, average, hensa, hensa_2zyo_sum, bunsan, hyojunHensa;
  char fileName[] = "Data_1.txt"; // 読み込むファイル名
  FILE *file1;
  file1 = fopen(fileName, "r");

  count = 0;
  sum = 0;
  while (fscanf(file1, "%lf\n", &date) != EOF) {
    count = count + 1;
    sum = sum + date;
    printf("%lf\n",date);
  }
  fclose(file1);

  average = sum / count;

  printf("-------------------------------\n");

  count = 0;
  hensa_2zyo_sum = 0;
  // 標準偏差計算
  file1 = fopen(fileName, "r");
  while (fscanf(file1, "%lf\n", &date) != EOF) {
    count = count + 1;
    hensa = date - average;
    hensa_2zyo_sum = hensa_2zyo_sum + (hensa * hensa);
    printf("偏差 = %lf, 偏差の2乗の合計 = %lf\n",hensa, hensa_2zyo_sum);
  }
  fclose(file1);

  bunsan = hensa_2zyo_sum / count;
  hyojunHensa = sqrt(bunsan);

  printf("分散＝%lf, 標準偏差＝%lf\n", bunsan, hyojunHensa);



  printf("データ数 = %d, 平均点 = %lf\n", count, average);



  return 0;
}
