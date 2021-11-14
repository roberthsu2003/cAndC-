#include <iostream>
using namespace std;

void playGame(int minume, int maxmum){
	srandom(time(NULL));
	int max = maxmum;
	int min = minume;
	int count = 0;
	int keyin;
  	int guess = random() % (99-1+1) + 1;
	cout << "===========猜數字遊戲===========" << endl;
	while(true){
		printf("猜數字範圍%d~%d:",min,max);
		cin >> keyin;
		count += 1;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "恭喜!猜對了!" << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}else if(keyin > guess){
				cout << "再小一點" << endl;
				max = keyin - 1;
			}else if(keyin < guess){
				cout << "再大一點" << endl;
				min = keyin + 1;
			}
			cout << "您已經猜了" << count << "次" << endl;
			cout << endl;
		}else{
			cout << "超出範圍,請重新輸入" << endl;
		}

	}
}

int main() {	
	while(true){
		playGame(20,80);
		char yn;
		cout << "好玩嗎?再來一盤吧?(y or n)):";
		cin >> yn;
		if(yn=='n'){
			break;
		}
	}
	cout << "遊戲結束!" << endl;
	return 0;	
} 
