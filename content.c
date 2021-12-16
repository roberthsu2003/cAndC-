#include <iostream>
using namespace std;

int main() {
	int money;
	int payMoney;
	cout << "請輸入購買金額:";
	cin >> money;
	if(money >= 45000 && money <= 46000){
		cout << "得獎" << endl;
	}else{
		cout << "沒有得獎" << endl;
	}
	
	return 0;
} 
