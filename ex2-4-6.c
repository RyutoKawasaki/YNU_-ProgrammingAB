// 1564349 川崎竜澄 2018/05/08
#include <stdio.h>

int fileWrite(int, int, int, int, int);

int main(void) {
  int scoreArraySize = 3;
  int score[scoreArraySize];
  int scoreArrayCount;
  int i, maxScore, minScore;
  char fileName[] = "in2-4-6.txt"; // 読み込むファイル名

  // ファイルから点数の入力
  FILE *file1;
  file1 = fopen(fileName, "r");

  for(scoreArrayCount = 0; scoreArrayCount < scoreArraySize; scoreArrayCount++) {
    fscanf(file1, "%d\n", &score[scoreArrayCount]);
  }
  fclose(file1);

  // 最高点と最低点を判別
  maxScore = minScore = score[0];
  for(i=1; i<3; ++i) {
    if( maxScore < score[i] )
      maxScore = score[i];
    if( minScore > score[i] )
      minScore = score[i];
  }

  // 最高点と最低点をファイルに入力
  fileWrite(score[0], score[1], score[2], maxScore, minScore);
  return 0;
}

// ファイル書き込みを行う関数
int fileWrite(int score0, int score1, int score2, int score3, int score4) {
  FILE *file1;
  file1 = fopen("out2-4-6.txt", "w");
  fprintf(file1, "1回目の点数 = %d\n2回目の点数 = %d\n3回目の点数 = %d\n最高点 = %d\n最低点 = %d\n", score0, score1, score2, score3, score4);
  fclose(file1);
  return 0;
}

/*
❯❯ cat in2-4-6.txt                                               (git)-[master]
95
70
55

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ cat out2-4-6.txt                                              (git)-[master]
1回目の点数 = 95
2回目の点数 = 70
3回目の点数 = 55
最高点 = 95
最低点 = 55
*/
