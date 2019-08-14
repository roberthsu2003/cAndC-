//============================================================================
// Name        : question1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "姓名 \t 座號 \t 電話\n";
	cout << "李振聲 \t 11 \t 0229435437\n";
	cout << "張四聲 \t 22 \t 0229765457\n";

	string str1;
	string str2 = "這是字串";
	string str3 = "學習\"C++\"語言不困難";
	cout << "\nstr1:" << str1 << "\n";
	cout << "str2:" << str2 << endl;
	cout << "str3:" << str3 << "\n";

	//布林型別
	bool bolA = true;
	bool bolB = false;

	cout << "bolA:" << bolA << endl;
	cout << "bolB:" << bolB;

	//型別自動轉換
	float PI = 3.14159;
	int radius = 10;
	cout << "\n";
	cout << "圓面積=" << PI * radius * radius << endl;


	//自動轉換型別
	int area;
	area = PI * radius * radius; //將左邊的值指定給右邊，型別會自動轉換
	cout << "area=" <<  area << endl;
	return 0;
}
