// 1564349 川崎竜澄 2018/05/24
#include <stdio.h>

int main(void) {
  long n, n_init;
  int count = 0;
  printf("桁数を求めたい正の整数n を入力してください。\n");
  scanf("%ld", &n);
  n_init = n;

  if(n == 0 || n < 0) {
    printf("error\n");
  } else {
    while(n != 0) {
      count = count + 1;
      n = n / 10;
    }
    printf("正の整数 %ld の桁数は %d桁\n", n_init, count);
  }
  return 0;
}
/*
❯❯ ./a.out                                                       (git)-[master]
桁数を求めたい正の整数n を入力してください。
0
error

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
桁数を求めたい正の整数n を入力してください。
-55
error

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
桁数を求めたい正の整数n を入力してください。
55
正の整数 55 の桁数は 2桁

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
桁数を求めたい正の整数n を入力してください。
1564349
正の整数 1564349 の桁数は 7桁
*/
