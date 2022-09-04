#//輸入顧客購買金額，若金額在100000元打8折，50000打85折，30000打9折，10000打95折
#include <iostream>

using namespace std;

int main() {
	int money,payMoney;
	cout << "請輸入購買金額:";
	cin >> money;
	if(money >= 100000){
		payMoney = money * 0.8;
	}else{
		payMoney = money;
	}

	cout << "實付金額是:" << payMoney << "元\n";
}
