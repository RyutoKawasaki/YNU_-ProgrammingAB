// 1564349 川崎竜澄 2018/05/15
#include <stdio.h>

int main(void) {
  int arraySize = 1; // 初期化
  int score[arraySize];
  int scoreArrayCount;
  int sum = 0;
  double heikin;

  printf("読み取るテストのデータ数を入力してください\n");
  scanf("%d", &arraySize);

  char fileName[] = "in2-3-12+.txt"; // 読み込むファイル名
  FILE *file1;
  file1 = fopen(fileName, "r");

  for(scoreArrayCount = 0; scoreArrayCount < arraySize; scoreArrayCount++) {
    fscanf(file1, "%d\n", &score[scoreArrayCount]);

    sum = sum + score[scoreArrayCount];
  }
  fclose(file1);

  heikin = sum / (double)arraySize; // キャスト
  printf("平均点 = %lf\n", heikin);

  return 0;
}

/*
❯❯ ./a.out                                                       (git)-[master]
読み取るテストのデータ数を入力してください
4
平均点 = 70.500000

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
読み取るテストのデータ数を入力してください
7
平均点 = 63.571429

❯❯ cat in2-3-12+.txt                                             (git)-[master]
98
39
62
83
71
43
49
*/
