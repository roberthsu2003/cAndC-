#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int keyin;
	int max = 100;
	int min = 1;
	int guess = rand() % max + min;
	int count = 0;
	cout << "============猜數字遊戲=============\n\n";
	while(true){
		cout << "猜數字範圍:" << min << "~" << max << ":";
		cin >> keyin;
		count += 1;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次\n\n";
				break;
			}else if(keyin > guess){
				cout << "再小一點" << endl;
				max = keyin;
				
			}else if(keyin < guess){
				cout << "再大一點" << endl;
				min = keyin;
			}
			cout << "您猜了" << count << "次\n\n";
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
		
	}
	cout << "遊戲結束\n";
	
}
