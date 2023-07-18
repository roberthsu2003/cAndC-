#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int min = 1;
	int max = 99;
	int keyin;
	int count = 0;
	int target = random() % (max-min+1) + min;
	cout << "==========猜數字遊戲============\n\n";
	while(true){
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		count++;
		if(keyin >= min && keyin <= max){
			if(keyin == target){
				cout << "賓果!猜對了,答案是" << target << endl;
				cout << "您一共猜了" << count << "次" << endl;
				break;
			}else if(keyin > target){
				cout << "再小一點" << endl;
				max = keyin - 1;				
			}else if(keyin < target){
				cout << "再大一點" << endl;
				min = keyin + 1;				
			}
			cout << "您已經猜了" << count << "次" << endl;
			
		}else{
			cout << "不正確的範圍" << endl;
			continue;
		}
	}
	cout << "Game Over!\n";
}
