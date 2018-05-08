// 1564349 川崎竜澄 2018/05/08
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n;

  printf("西暦年数nを入力してください\n");
  scanf("%d", &n);

  bool nIsMultipleOf400 = (n % 400 == 0 && n != 0);
  bool nIsMultipleOf4Not100 = (n % 4 == 0 && n % 100 != 0 && n != 0);

  if (nIsMultipleOf400 || nIsMultipleOf4Not100) {
    printf("%d年はうるう年\n", n);
  } else {
    printf("%d年はうるう年でない\n", n);
  }

  return 0;
}
/*
❯❯ ./a.out                                                       (git)-[master]
西暦年数nを入力してください
2018
2018年はうるう年でない

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
西暦年数nを入力してください
2100
2100年はうるう年でない

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
西暦年数nを入力してください
1994
1994年はうるう年でない
*/
