//============================================================================
// Name        : callByRef1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void  turbo(int &);
int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;

	turbo(speed);
	cout << "加速後速度:" << speed << endl;

	return 0;
}

void turbo(int &mySpeed){
	cout << "加整前速度:" << mySpeed << endl;
	mySpeed+=10;
}
