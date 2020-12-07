#include <iostream>
using namespace std;

int main() {
	int money,payMoney;
	printf("請輸入購買金額:");
	cin >> money;
	if (money >= 100000){
		payMoney = money * 0.8;
	}else if(money >= 50000){
		payMoney = money * 0.85;
	}else if(money >= 30000){
		payMoney = money * 9;
	}else if(money >=10000){
		payMoney = money * 95;
	}else{
		payMoney = money;
	}

	printf("實體金額是:%d\n", payMoney);
	return 0;
}
