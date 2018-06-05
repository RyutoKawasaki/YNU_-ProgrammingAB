#include <stdio.h>
#include <stdlib.h>

int rand0to100(void);

int main(void) {
  srand(1564349);
  int count, n;
  n = 20;

  for (count = 1; count <= n; count++) {
    printf("%d ", rand0to100());
  }
  printf("\n");

  return 0;
}

int rand0to100(void) {
    return rand() % 101;
}
/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
85 15 91 100 69 98 93 76 68 6 29 92 51 70 100 29 80 8 68 32
*/
