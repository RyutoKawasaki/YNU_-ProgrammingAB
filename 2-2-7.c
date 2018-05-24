// 1564349 川崎竜澄 2018/04/10
#include <stdio.h>

int calc(int, int);

int main(void) {
  calc(1564349, 8);
  return 0;
}

int calc(int n, int k) {
  int wa, sa, seki, sho, amari;
  wa = n + k;
  sa = n - k;
  seki = n * k;
  sho = n / k;
  amari = n % k;
  printf("和 = %d\n差 = %d\n積 = %d\n商 = %d\n余り = %d\n", wa, sa, seki, sho, amari);
  return 0;
}

/*
[Ryuton@Ryuton-no-MacBook-Pro] ~/Projects/c/YNU_ProgAB
% ./a.out                                                        (git)-[master]
和 = 1564357
差 = 1564341
積 = 12514792
商 = 195543
余り = 5
*/
