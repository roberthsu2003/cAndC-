#include <iostream>
using namespace std;
int main() {
	int money;
	int paymoney=0;
	cout << "請輸入購買金額:";
	cin >> money;

	if(money >= 100000){
		paymoney = money * 0.8;
	}else if(money >= 50000){
		paymoney = money * 0.85;
	}else if(money >= 30000){
		paymoney = money * 0.9;
	}else if(money >= 10000){
		paymoney = money * 0.95;
	}else{
		paymoney = money;
	}

	cout << "實付金額是:" << paymoney << "元\n";
	return 0;
}
