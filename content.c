#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	int min=1;
	int max=99;
	int keyin;
	int count = 0;
	srand(time(NULL));
	int guess = rand() % max + min;
	cout << "=============猜數字遊戲==================\n\n";
	do{
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		count++;
			if(keyin >=min && keyin <=max){
				if(keyin == guess){
					cout << "賓果!猜對了,答案是" << guess << endl;
					cout << "您猜了" << count << "次\n\n";
					break;
				}else if(keyin > guess){
					max = keyin;
					cout << "再小一點";
				}else{
					min = keyin;
					cout << "再大一點";
				}
				cout << "您猜了" << count << "次\n\n";
			}else{
				cout << "請輸入提示範圍內的數字! \n";
			}
			
	}while(true);
}
