#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand0to1(void);
double calcEquation(double, double, double, double);

int main(void) {
  srand(time(NULL)); // 現在時刻の情報で初期化
  double r, a, b, c, f;
  a = rand0to1();
  b = rand0to1();
  c = rand0to1();

  for(r = -10; r <= 10; r = r + 0.5) {
    f = calcEquation(r, a, b, c);
    printf("f(%lf, %lf, %lf, %lf) = %lf\n", r, a, b, c, f);
  }
  return 0;
}

double rand0to1(void) {
    return (double)rand() / ((double)RAND_MAX + 1);
}

double calcEquation(double r, double a, double b, double c) {
  double f;
  f = a * r * r + b * r + c;
  return f;
}
/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
score[0] = 4
score[1] = 42
score[2] = 96
score[3] = 7
score[4] = 43
score[5] = 31
score[6] = 18
score[7] = 72
score[8] = 62
score[9] = 73
score[10] = 52
score[11] = 62
score[12] = 35
score[13] = 52
score[14] = 66
score[15] = 16
score[16] = 70
score[17] = 70
score[18] = 69
score[19] = 67
score[20] = 99
score[21] = 2
score[22] = 12
score[23] = 43
score[24] = 87
score[25] = 71
score[26] = 15
score[27] = 64
score[28] = 46
score[29] = 26
score[30] = 40
score[31] = 33
score[32] = 94
score[33] = 32
score[34] = 5
score[35] = 94
score[36] = 37
score[37] = 72
score[38] = 49
score[39] = 87
score[40] = 60
score[41] = 29
score[42] = 12
score[43] = 26
score[44] = 49
score[45] = 6
score[46] = 100
score[47] = 67
score[48] = 5
score[49] = 43
score[50] = 3
score[51] = 20
score[52] = 43
score[53] = 36
score[54] = 15
score[55] = 58
score[56] = 82
score[57] = 99
score[58] = 16
score[59] = 89
score[60] = 58
score[61] = 4
score[62] = 44
score[63] = 16
score[64] = 36
score[65] = 55
score[66] = 5
score[67] = 79
score[68] = 30
score[69] = 59
score[70] = 75
score[71] = 22
score[72] = 52
score[73] = 19
score[74] = 57
score[75] = 41
score[76] = 59
score[77] = 22
score[78] = 3
score[79] = 2
score[80] = 78
score[81] = 77
score[82] = 21
score[83] = 69
score[84] = 58
score[85] = 36
score[86] = 14
score[87] = 38
score[88] = 70
score[89] = 0
score[90] = 63
score[91] = 33
score[92] = 13
score[93] = 47
score[94] = 95
score[95] = 83
*/
