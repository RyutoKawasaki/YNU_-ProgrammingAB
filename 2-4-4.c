// 1564349 川崎竜澄 2018/05/08
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int inputNumber;

  printf("整数を入力してください\n");
  scanf("%d", &inputNumber);

  bool inputNumberIsEven = (inputNumber % 2 == 0);

  if (inputNumberIsEven) {
    printf("%d is a Even Number\n", inputNumber);
  } else {
    printf("%d is a Odd Number \n", inputNumber);
  }

  return 0;
}

/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
整数を入力してください
349
349 is a Odd Number
*/
