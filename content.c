#include <iostream>
using namespace std;

int main() {
	int max = 100;
	int min = 1;
	int guess;
	int keyin;
	int count = 0;
	srand(time(NULL));
	guess = rand() % max + min;

	cout <<  "===============猜數字遊戲=================:\n\n";
	
	do{
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		count += 1;

		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
			cout << "您猜了" << count << "次\n\n";
				break;
			}else if( keyin > guess){
				max = keyin - 1;
				cout << "再小一點\n";
			}else if(keyin < guess){
				min = keyin + 1;
				cout << "再大一點\n";
			}

			cout << "您猜了" << count << "次\n\n";

		}else{
			cout << "請輸入提示範圍內的數字! \n";
		}


	}while(true);
}
