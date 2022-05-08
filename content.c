#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int keyin;
	int guess;
	srand(time(NULL));
	//1~99
	int max = 99;
	int min = 1;
	guess = rand() % (max - min + 1) + min;
	cout << guess << endl;
	cout << "==========猜數字遊戲================\n\n";
	while(true){
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				break;
			}else{
				cout << "猜錯了" << endl;
			}
		}else{
			cout << "請輸入提示範圍內的數字!\n" << endl;			
		}
		
	}
	cout << "遊戲結束" << endl;
}
