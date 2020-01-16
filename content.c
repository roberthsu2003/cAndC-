#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int money;
	int payMoney;
	cout << "請輸入購買的金額:";
	cin >> money;
	
	if(money >= 100000){
		payMoney = money * 0.8;
	}else if (money >= 50000){
		payMoney = money * 0.85;
	}else if (money >= 30000){
		payMoney = money * 0.9;
	}else if(money >= 10000){
		payMoney = money * 0.95;
	}else{
		payMoney = money;
	}
	
	cout << "實付金額是:" << payMoney << "元\n";
	return 0;
}
