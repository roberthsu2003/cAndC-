#include <iostream>
using namespace std;
#include <time.h>
int main() {
	srand(time(NULL));
	int keyin;
	int min = 1;
	int max = 100;
	int count = 0;
	int guess = rand() % max + min;
	cout << "============猜數字遊戲============:\n\n";
	while(true){
		cout << "猜數字範圍" << min << "~" << max << ":"; 
		cin >> keyin;
		count += 1;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜中了答案是" << guess <<endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}else if(keyin > guess){
				cout << "再小一點\n";
				max = keyin;
			}else if(keyin < guess){
				cout << "再大一點\n";
				min = keyin;
			}
			cout << "你已經猜了" << count << "次\n\n";
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
		
	}
	cout << "遊戲結束" << endl;
}
