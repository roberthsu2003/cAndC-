//直角三角型

#include <math.h>
#include <stdio.h>

int main(void) {
  double x, y;
  double z;
  printf("請輸入x:");
  scanf("%lf", &x);

  printf("請輸入y:");
  scanf("%lf", &y);

  z = sqrt(pow(x, 2) + pow(y, 2));

  printf("直角三角型,2邊為%.2f公分,%.2f公分\n", x, y);
  printf("斜邊為%.2f\n",z);
  return 0;
}
