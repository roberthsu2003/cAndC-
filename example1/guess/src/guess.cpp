//============================================================================
// Name        : guess.cpp
//猜數字遊戲
#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#include <time.h>
using namespace std;

int main() {
	int keyin, guess, count, min, max;
	count = 0;
	min =1;
	max = 99;
	srand(time(NULL));
	guess = rand() % 99 + 1;
	cout << "====== 猜數字遊戲==============:\n\n";
	do
	{
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >>  keyin;
		count++;
		if(keyin>=1 && keyin<100){
			if(keyin==guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				break;
			}else if(keyin>guess){
				max = keyin;
				cout << "再小一點!!";
			}else if (keyin<guess){
				min=keyin;
				cout << "再大一點!!";
			}
			cout << "您猜了" << count << "次\n\n";

		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
	}while(1);
	cout << "您總共猜了" << count << "次";
	return 0;
}
