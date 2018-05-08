// 1564349 川崎竜澄 2018/05/08
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int n;

  printf("整数を入力してください\n");
  scanf("%d", &n);

  bool nIsMultipleOf3 = (n % 3 == 0 && n != 0);
  bool nIsMultipleOf4 = (n % 4 == 0 && n != 0);

  if(nIsMultipleOf3 && nIsMultipleOf4) {
    printf("%d is koubaisuu of 3 and 4\n", n);
    exit(0);
  } else if(nIsMultipleOf3) {
    printf("%d is 3 no baisuu\n", n);
    exit(0);
  } else if(nIsMultipleOf4) {
    printf("%d is 4 no baisuu\n", n);
    exit(0);
  } else {
    printf("%d is not multiple of 3 or multiple of 4\n", n);
  }

  return 0;
}

/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
整数を入力してください
349
349 is not multiple of 3 and multiple of 4

❯❯ ./a.out                                                       (git)-[master]
整数を入力してください
4
4 is 4 no baisuu

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
整数を入力してください
3
3 is 3 no baisuu

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
整数を入力してください
24
24 is koubaisuu of 3 and 4
*/
