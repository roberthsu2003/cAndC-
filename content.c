main.cpp

#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	char go;
	do{
		playGame();
		cout << "重新開始(y or n)" << endl;
		cin >> go;
		if(go=='y'){
			continue;
		}else if(go=='n'){
			break;
		}else{
			break;
		}
	}while(true);
	
	return 0;
}

tools.h

//定義function
//function的原型
//這是做2個整數的交換內容
void swap(int*, int*);

//猜數子遊戲
void playGame();



tools.cpp
#include <iostream>
using namespace std;

void swap(int *n, int *m){
	int temp = *n;
	*n = *m;
	*m = temp;
}

void playGame(){
	int max = 100;
	int min = 1;
	int keyin;
	int count = 0;
	srand(time(NULL));
	int guess = rand() % max + min;
	cout << "===============猜數字遊戲=================:\n\n";
	do{
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		count++;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次\n\n";
				break;
			}else if(keyin > guess){
				max = keyin;
				cout << "再小一點";
			}else if (keyin < guess){
				min = keyin;
				cout << "再大一點";
			}
			cout << "您猜了" << count << "次\n\n"; 
		}else{
			cout << "請輸入提示範圍內的數字";
		}

	}while(true);
	cout << "遊戲結束\n";
}
