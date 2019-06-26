//============================================================================
// Name        : salscore.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	short chinese=0, english=0, math=0;
	cout << "請輸入國文的成績(0-100):";
	cin >> chinese;

	cout << "請輸入英文的成績(0-100):";
	cin >> english;

	cout << "請輸入數學的成績(0-100):";
	cin >> math;

	int sum = chinese + english + math;
	//float average = (float)sum / 3;
	//float average = sum / 3.0;
	float average = (float)sum / 3.0;
	cout << "您的總分為" << sum << "分,平均為" << average << "分\n";


	return 0;
}
