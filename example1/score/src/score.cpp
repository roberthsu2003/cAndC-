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
	cout << "姓名\t座號\t電話" << endl;
	cout << "李振聲\t" << 11 << "\t0229424563\n";
	cout << "張四聲\t" << 13 << "\t0229457567\n";

	string str1;
	string str2 = "這是字串";
	string str3 = "這是\"Ｃ++\",非常簡單";
	cout << "str1的內容是:" << str1 << endl;
	cout << "str2的內容是:" << str2 << endl;
	cout << "str3的內容是:" << str3 << endl;

	bool bolA = true;
	bool bolB = false;
	cout << "bolA:" << bolA << endl;
	cout << "bolB:" << bolB << endl;
	return 0;
}
