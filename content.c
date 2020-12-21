main.cpp

#include <iostream>
#include <stdio.h>
#include "tool.h"

int main() {
	

	int inputNum;
	std::cout << "請輸入數字 n:";
	std::cin >> inputNum;
	showNum(inputNum);
	std::cout << std::endl;
	return 0;
}




tool.h

#define PI 3.14159

//宣告function的原型
float temperature(int);
void showNum(int);


tool.cpp
#include "tool.h"
#include <iostream>

float temperature(int value){
	return 1.8 * value + 32;
}

void showNum(int n){
	int i = 1;
	while(true){
		if(i > n){
			return;
		}
		std::cout << i << " ";
		i++;
	}
}
