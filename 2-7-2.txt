#include <stdio.h>
#include <stdlib.h>

int rand0to100(void);

int main(void) {
  srand(1564349);

  int count, numberOfDate;
  numberOfDate = 95;

  for (count = 1; count <= numberOfDate; count++) {
    printf("score[%2d] = %3d\n", count, rand0to100());
  }

  return 0;
}

int rand0to100(void) {
    return rand() % 101;
}
/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
score[ 1] =  85
score[ 2] =  15
score[ 3] =  91
score[ 4] = 100
score[ 5] =  69
score[ 6] =  98
score[ 7] =  93
score[ 8] =  76
score[ 9] =  68
score[10] =   6
score[11] =  29
score[12] =  92
score[13] =  51
score[14] =  70
score[15] = 100
score[16] =  29
score[17] =  80
score[18] =   8
score[19] =  68
score[20] =  32
score[21] =  49
score[22] =  95
score[23] =  40
score[24] =   4
score[25] =  68
score[26] =  10
score[27] =  90
score[28] =  38
score[29] =  43
score[30] =  86
score[31] =  24
score[32] =  42
score[33] =  95
score[34] =  24
score[35] =  57
score[36] =  31
score[37] =  59
score[38] =  98
score[39] =  31
score[40] =  98
score[41] =  22
score[42] =  33
score[43] =  94
score[44] =  85
score[45] =  44
score[46] =  67
score[47] =  33
score[48] =  89
score[49] =  10
score[50] =  27
score[51] =  39
score[52] =  81
score[53] =   5
score[54] =  28
score[55] =  74
score[56] =   2
score[57] =  80
score[58] =  37
score[59] =  25
score[60] =  86
score[61] =  59
score[62] =  74
score[63] =  65
score[64] =   2
score[65] =  83
score[66] =   6
score[67] =  29
score[68] =  25
score[69] =  48
score[70] =  44
score[71] =  26
score[72] =  56
score[73] =  12
score[74] =  90
score[75] =  75
score[76] =  82
score[77] =  43
score[78] =  31
score[79] =  65
score[80] =  32
score[81] =  37
score[82] =  42
score[83] =  23
score[84] =  41
score[85] =  13
score[86] =  33
score[87] =  43
score[88] =  30
score[89] =  12
score[90] =  44
score[91] =  17
score[92] =  64
score[93] =  40
score[94] =  99
score[95] =  69
*/
