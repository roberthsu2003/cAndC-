#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	int max = 10;
	int min = 1;
	int keyin;
	int count = 0;
	int guess = random() % (max-min+1) + min;
	cout << "=========猜數字遊戲==============\n\n";
	while(true){
		printf("猜數字範圍%d~%d:",min,max);
		cin >> keyin;
		count += 1;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
	}
	cout << "遊戲結束" << endl;
}
