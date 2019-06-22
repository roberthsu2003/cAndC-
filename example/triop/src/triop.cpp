//============================================================================
// Name        : triop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//讓使用者輸入三個任意數，程式會顯示三數中的最大數
	float input1, input2, input3, max;
	cout << "請輸入第一個數:";
	cin >> input1;
	cout << "請輸入第二個數:";
	cin >> input2;
	max = input1 > input2 ? input1 : input2 ;
	cout << "請輸入第三個數:";
	cin >> input3;
	max = max > input3 ? max : input3;
	cout << "使用者輸入的值是:" << input1 << " " << input2 << " " << input3 << endl;
	cout << "最大值是:" << max ;
	return 0;
}
