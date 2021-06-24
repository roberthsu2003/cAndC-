main.cpp

#include <iostream>
#include <stdio.h>
#include "tool.h"
using namespace std;


int main() {
  int c;
  float result;
  cout << "請輸入攝氏溫度:";
  cin >> c;
  result = temperature(c); //呼叫function
  printf("華氏溫度=%.2f\n",result);
  return 0;
}

tool.h
//函式原型
float temperature(int);
//定義function
float temperature(int value){
	return value * 1.8 + 32;
}

