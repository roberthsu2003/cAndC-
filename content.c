main.cpp

#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	guessNumber();
	return 0;
}

tools.h
#ifndef _TOOLS_H_
#define _TOOLS_H_
//定義function的原型
int add(int,int);

//猜數字遊戲
void guessNumber();
#endif

tools.cpp

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int add(int a,int b){
	return a+b;
}

void guessNumber(){
	int guess;
	int min = 1;
	int max = 100;
	int keyin;
	int count = 0;
	srand(time(NULL));
	guess = rand() % max + min;
	cout << "===============猜數字遊戲=================:\n\n";
	do{
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		count++;

		if(keyin >=min && keyin <=max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次\n\n";
				break;
			}else if (keyin > guess){
				max = keyin - 1 ;
				cout << "再小一點!";
			}else if (keyin < guess){
				min = keyin + 1;
				cout << "再大一點!";
			}
			cout << "您猜了" << count << "次\n\n";
		}else{
			cout << "請輸入提示範圍內的數字! \n";
		}


	}while(true);
	
	cout << "遊戲結束\n";
}
