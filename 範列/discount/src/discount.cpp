//============================================================================
// Name        : discount.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int money, pay;
	cout << "請輸入購買的金額:";
	cin >> money;
	cout << "實付金額:";

	if(money >= 100000){
		pay =  money * 0.8;
	}else if (money >= 50000){
		pay = money * 0.85;
	}else if (money >= 30000){
		pay = money * 0.9;
	}else if (money >= 10000){
		pay = money * 0.95;
	}else{
		pay = money;
	}

	cout << pay <<  "元\n";
	cout << "拆扣的金額是" << money - pay << "元\n";
	return 0;
}
