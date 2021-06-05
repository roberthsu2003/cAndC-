#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	int guess;
	int min = 1;
	int max = 100;
	int keyin;
	int count = 0;
	srand(time(NULL));
	guess = rand() % max + min;
	//cout << "亂數值是" << guess  << endl;
	cout << "===============猜數字遊戲=================:\n\n";
	do{
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		count++;
		if(keyin >= min && keyin <=max){
			//在最小和最大範圍內
			if(keyin == guess){
				//已經猜中了
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次\n\n";
				break;
			}else if(keyin > guess){
				max = keyin;
				cout << "再小一點!";
			}else if(keyin < guess){
				min = keyin;
				cout << "再大一點";
			}
			cout << "您猜了" << count << "次\n\n";
		}else{
			cout << "請輸入提示範圍內的數字! \n";
		}
	}while(true);
	cout << "遊戲結束\n";

}
