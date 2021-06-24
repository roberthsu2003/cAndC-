#include <iostream>
#include <stdio.h>
using namespace std;
//定義function
float temperature(int value){
	return value * 1.8 + 32;
}

int main() {
  int c;
  float result;
  cout << "請輸入攝氏溫度:";
  cin >> c;
  result = temperature(c); //呼叫function
  printf("華氏溫度=%.2f\n",result);
  return 0;
}
