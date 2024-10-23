#include <stdio.h>
//求梯型面積(上底+下底) * 高 / 2
//上底:2
//下底:3
//高:3
int main(void) {
  printf("求梯型面積(上底+下底) * 高 / 2\n");
  printf("上底:2\n");
  printf("下底:3\n");
  printf("高:3\n");
  printf("面積是:%.2lf\n",(2 + 3) * 3 / 2.0); //自動轉換
  printf("面積是:%.2lf\n",(2 + 3) * 3 / (double)2); //強制轉換
  //printf("面積是:%.2lf\n",(double)((2 + 3) * 3 / 2)); //強制轉換(錯誤的)
  printf("面積是:%.2lf\n",(double)(2 + 3) * 3 / 2); //強制轉換
  return 0;
}
