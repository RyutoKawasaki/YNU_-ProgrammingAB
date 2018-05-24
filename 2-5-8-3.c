// 1564349 川崎竜澄 2018/05/17
#include <stdio.h>

double degreeToRadian(double);

int main(void) {
  int n, i;
  double x, ans, tmp;

  printf("項数n を入力してください。\n");
  scanf("%d", &n);
  printf("角度x を入力してください。\n");
  scanf("%lf", &x);

  ans = 1;
  tmp = 1;
  for(i = 1; i < n; i++) {
    tmp = tmp * (-1) * degreeToRadian(x) * degreeToRadian(x) / ((2.0 * i - 1.0) * (2.0 * i));
    ans = ans + tmp;
  }
  printf("cos(%f°) のマクローリン展開第%d項までの和は %f\n", x, n, ans);
  return 0;
}

// 角度(degree)からラジアン(radian)に変換する関数
double degreeToRadian(double degree) {
  double radian, pi;
  pi = 3.141592653589793;
  radian = degree * pi / 180.0;
  return radian;
}
/*
項数nを入力してください。
1
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第1項までの和は 1.000000

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
2
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第2項までの和は 0.634307

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
3
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第3項までの和は 0.656595

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
4
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第4項までの和は 0.656052

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
5
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第5項までの和は 0.656059

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
6
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第6項までの和は 0.656059

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
7
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第7項までの和は 0.656059

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
8
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第8項までの和は 0.656059

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
9
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第9項までの和は 0.656059

[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
❯❯ ./a.out                                                       (git)-[master]
項数nを入力してください。
10
角度xを入力してください。
49
cos(49.000000°) のマクローリン展開第10項までの和は 0.656059
*/
