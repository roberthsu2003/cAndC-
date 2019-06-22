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
	//輸入顧客購買金額，若金額在100000元打8折，50000打85折，30000打9折，10000打95折
	int money;
	cout << "請輸入購買金額:";
	cin >> money;
	cout << "實付金額是:";
	if(money >= 100000){
		cout << money*0.8;
	}else if(money >= 50000){
		cout << money*0.85;
	}else if(money >= 30000){
		cout << money * 0.9;
	}else if(money >= 10000){
		cout << money * 0.95;
	}else{
		cout << money;
	}

	return 0;
}
