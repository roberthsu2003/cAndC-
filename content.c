#include <iostream>
using namespace std;

int main() {
	int money,payMoney;
	printf("請輸入購買金額:");
	cin >> money;
	if (money < 10000){
		payMoney = money;
	}else if(money < 30000){
		payMoney = money * 0.95;
	}else if(money < 50000){
		payMoney = money * 0.9;
	}else if(money < 100000){
		payMoney = money * 0.85;
	}else{
		payMoney = money * 0.8;
	}

	printf("實體金額是:%d\n", payMoney);
	return 0;
}
