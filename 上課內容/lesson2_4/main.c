#include <stdio.h>

int main(void) {
  printf("求梯型面積(上底+下底) * 高 / 2\n");
  double top,bottom,height;
  
  printf("請輸入上底:");
  scanf("%lf",&top);
  
  printf("請輸入下底:");
  scanf("%lf",&bottom);
  
  printf("請輸入高:");
  scanf("%lf",&height); 
  
  printf("上底:%.2lf,下底:%.2lf,高:%.2lf\n",top,bottom,height); 
  printf("面積是:%.2lf\n",(top + bottom) * height / 2.0); //自動轉換

  return 0;
}
