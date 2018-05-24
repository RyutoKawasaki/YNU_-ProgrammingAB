// 1564349 川崎竜澄 2018/05/08
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n;

  printf("整数Nを入力してください\n");
  scanf("%d", &n);

  bool nIsMultipleOf11 = (n % 11 == 0 && n != 0);
  bool nIsMultipleOf13 = (n % 13 == 0 && n != 0);

  if (nIsMultipleOf11 || nIsMultipleOf13) {
    printf("Yes! %d is a multiple of 11 or 13\n", n);
  } else {
    printf("No! %d is not a multiple of 11 or 13\n", n);
  }

  return 0;
}

/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
整数Nを入力してください
22
Yes! 22 is a multiple of 11 or 13

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
整数Nを入力してください
25
No! 25 is not a multiple of 11 or 13

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
整数Nを入力してください
26
Yes! 26 is a multiple of 11 or 13

❯❯ ./a.out                                                       (git)-[master]
整数Nを入力してください
0
No! 0 is not a multiple of 11 or 13
*/
