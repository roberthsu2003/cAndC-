main.cpp

#include <iostream>
#include <stdio.h>
#include "tool.h"



int main() {
	int inputValue;
	float result;
	std::cout << "請輸入攝氏溫度:";
	std::cin >> inputValue;
	result = temperature(inputValue);
	//c++的輸出
	std::cout << "華氏溫度=" << result << std::endl;
	//c語言輸出
	printf("華氏溫度=%.2f\n",result);
	return 0;
}


tool.h

//宣告function的原型
float temperature(int);

float temperature(int value){
	return 1.8 * value + 32;
}
