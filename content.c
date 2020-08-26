#include <iostream>
using namespace std;

int main() {
	int min = 1;
	int max = 100;
	int keyin;
	srand(time(NULL));
	int guess = rand() % max + min;
	cout << "============猜數字遊戲================\n\n";
	do{
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		if(keyin >= 1 and keyin <= 100){
			cout << "已輸入正確範圍";
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
	}while(true);
