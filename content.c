main.c

#include <stdio.h>
#include "tool.h"

int main(void) {
  int c;
  float result;
  printf("請輸入攝氏溫度:");
  scanf("%d",&c);
  result = temperature(c); //呼叫function
  printf("華氏溫度=%.2f\n",result);
  return 0;
}


tool.h
//函式原型
//這是華氏轉攝氏，參數請輸入攝氏溫度
float temperature(int);


tool.c
//定義function
float temperature(int value){
	return value * 1.8 + 32;
}

