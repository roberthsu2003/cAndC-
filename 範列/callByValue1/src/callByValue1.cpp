//============================================================================
// Name        : callByValue1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int turbo(int);

int main() {
	int speed;
	cout << "請輸入初始的速度:";
	cin >> speed;
	speed = turbo(speed);
	cout << "加速後的速度:" << speed << endl;
	return 0;
}
//call by value
int turbo(int speed){
	cout << "加速前速度:" << speed << endl;
	return speed += 10;
}
