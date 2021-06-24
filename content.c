main.cpp

#include <iostream>
#include "game.h"

using namespace std;
int main() {
	char go;
	do{
		playGame();
		cout << "還要繼續玩嗎?(y 或 n):";
		cin >> go;
		if(go=='y'){
			continue;
		}else{
			break;
		}
	}while(true);
	
	return 0;
}


game.h
void playGame();


game.cpp
#include <iostream>
using namespace std;

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
