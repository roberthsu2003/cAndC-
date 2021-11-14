#include <iostream>
using namespace std;

int main() {	
	srandom(time(NULL));
	int max = 99;
	int min = 1;
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

	cout << "遊戲結束" << endl;
} 
