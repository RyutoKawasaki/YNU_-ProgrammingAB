// 1564349 川崎竜澄 2018/04/26
#include <stdio.h>
#include <math.h>

double calcVelocity(double, double);
double calcHeight(double, double);

int main(void) {
  double v0;
  int t, timeArraysize = 100;
  double v[timeArraysize], z[timeArraysize];

  printf("初速度を入力してください\n");
  scanf("%lf", &v0);

  FILE *gp;
  gp=popen("gnuplot -persist","w");
  //fprintf(gp, "set multiplot\n"); // マルチプロットモード
  fprintf(gp, "set title'Height at time (InitialVelocity = %lf [m/s])' \n", v0); // グラフタイトル
  fprintf(gp, "plot '-' with points pointtype 1 title \"Height\"\n"); // 点の名前
  //fprintf(gp, "set xlabel't [s]' \n"); // x軸ラベル
  //fprintf(gp,"set ylabel'Height [m/s]' \n"); // y軸ラベル

  for(t = 0; t < timeArraysize; t++) {
    //v[t] = calcVelocity(v0, t);
    z[t] = calcHeight(v0, t);
    //printf("時刻t = %3d[s] で\n速度vは %10lf[m/s], 位置zは %13lf[m]\n", t, v[t], z[t]);
    fprintf(gp, "%d\t%f\n", t, z[t]); // 点のプロット
  }
  pclose(gp);
  return 0;
}

double calcVelocity(double initialVelocity, double t0){
  double velocity;
  double gravity = 9.8;
  velocity = initialVelocity - gravity * t0;
  return velocity;
}

double calcHeight(double initialVelocity, double t1){
  double height;
  double gravity = 9.8;
  height = (initialVelocity * t1) - (gravity * t1 * t1 / 2.0);
  return height;
}
