#include <stdio.h>

int main(void) {
  int top = 2;
  int botton = 3;
  int height = 3;
  double area;
  printf("上底:%d\n", top);
  printf("下底:%d\n", botton);
  printf("高:%d\n", height);
  area = (top + botton) * height / 2.0;
  printf("面積是:%.2lf\n", area);
  return 0;
}
