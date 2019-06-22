//============================================================================
// Name        : complex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//讓使用者輸入一個任意數,程式會顯示此數的平方值及立方值
	float result, n;
	cout << "請輸入任意數:";
	cin >> n;
	result = n;
	result *= n;
	cout << "此數的平方為:" << result << endl;
	result *= n;
	cout << "此數的立方為:" << result << endl;
	return 0;
}
