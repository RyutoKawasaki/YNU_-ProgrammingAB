#include <stdio.h>
#include <math.h>

double calc_fx(double);
double calc_h(double, double, int);

int main() {
  double a, b;
  int n = 6; //次数

  a = 0;
  b = 2; // 積分範囲 a ~ b

  double sum;
  double R[n+1][n+1];
  int i, j, k;

  R[1][1]= calc_h(a,b,1) / 2 * (calc_fx(a) + calc_fx(b));

  for(k = 2; k <= n; k++) {
    sum = 0;
    for (i = 1; i <= pow(2, k-2); i++) {
      sum = sum + calc_fx(a + (2 * i - 1) * calc_h(a, b, k));
    }
    R[k][1] = (R[k-1][1] + calc_h(a, b, k-1) * sum) / 2;
  }

  for(k = 2; k <= n; k++) {
    for(j = 2; j <= k; j++) {
      R[k][j] = R[k][j-1] + (R[k][j-1] - R[k-1][j-1]) / (pow(4, j-1) - 1);
    }
  }

  for(k = 1; k <= n; k++) {
    for(j = 1; j <= k; j++) {
      printf("R[%d][%d] = %13.10lf ",k, j, R[k][j]);
    }
    printf("\n");
  }
  return 0;
}

//被積分関数fx
double calc_fx(double x) {
  double fx;
  fx = sqrt(4 - x * x);
  return fx;
}

//補助関数h
double calc_h(double a, double b, int k) {
  double h;
  h = (b - a) / pow(2, k-1);
  return h;
}
/*
R[1][1] =  2.0000000000
R[2][1] =  2.7320508076 R[2][2] =  2.9760677434
R[3][1] =  2.9957090681 R[3][2] =  3.0835951549 R[3][3] =  3.0907636490
R[4][1] =  3.0898191444 R[4][2] =  3.1211891698 R[4][3] =  3.1236954374 R[4][4] =  3.1242181642
R[5][1] =  3.1232530378 R[5][2] =  3.1343976690 R[5][3] =  3.1352782356 R[5][4] =  3.1354620895 R[5][5] =  3.1355061834
R[6][1] =  3.1351024229 R[6][2] =  3.1390522179 R[6][3] =  3.1393625212 R[6][4] =  3.1394273511 R[6][5] =  3.1394429011 R[6][6] =  3.1394467493

*/
