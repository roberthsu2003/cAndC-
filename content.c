#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int max = 60;
	int min = 50;	
	srandom(time(NULL));
	int guess = random() % (max-min+1) + min;
	int keyin;
	int count = 0;
	cout << guess << endl;

	cout <<  "============猜數字遊戲================\n\n";
	while(true){
		cout << "猜數字範圍" << min << "~" << max << ":";
		cin >> keyin;
		count += 1;
		if(keyin >= 50 && keyin <=60){	
			//輸入範圍正確的
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}else{
				cout << "猜錯了!您已經猜了" << count << "次\n";
			}
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
	}
}
