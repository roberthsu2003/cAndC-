#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//建立function
void guessGame(){
	srand(time(NULL));	
	int max = 99;
	int min = 1;
	int keyin;
	int count = 0;
	int guess = random() % (max-min+1) + min;
	cout << guess << endl;
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
			}else if(keyin > guess){
				max = keyin;
				cout << "再小一點!";
			}else if(keyin < guess){
				min = keyin;
				cout << "再大一點!";
			}
			cout << "您已經猜了" << count << "次" << endl;
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
	}
}

int main() {
	//呼叫function
	char playAgain;
	do{
		guessGame();
		cout << "繼續嗎?(y,n):";
		cin >> playAgain;
	}while(playAgain == 'y');
		
	cout << "遊戲結束" << endl;
}
