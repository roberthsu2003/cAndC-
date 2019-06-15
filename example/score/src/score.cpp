//============================================================================
// Name        : score.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "姓名\t座號\t國文\t數學\t英文\n";
	cout << "張三曹\t01\t89\t78\t\78\n";
	cout << "張四曹\t02\t80\t68\t\64\n";
	cout << "張五曹\t03\t92\t83\t\84\n";

	string str1;
	string str2 = "這是字串";
	string str3 = "這是 \" C++ \",非常簡單";

	cout << "str1是" << str1 << endl;
	cout << "str2是" << str2 << endl;
	cout << "str3是" << str3 << endl;

	bool bolA = true;
	bool bolB = false;

	cout << "bolA是" << bolA << endl;
	cout << "bolB是" << bolB << endl;

	//型別自動轉換
	float PI = 3.14159;
	int radius = 10;
	//PI * radius * radius 自動轉換為float
	cout << "圓面積=" << PI * radius * radius << endl;

	int area;
	area = PI * radius * radius; //自動由flaot轉換為int
	cout << "area =" << area;
	return 0;
}
