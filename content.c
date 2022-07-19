#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int max = 100;
	int min = 0;	
	srandom(time(NULL));
	int guess = random() % (max-min+1) + min;
	int keyin;
	int count = 0;
	//cout << guess << endl;

	cout <<  "============猜數字遊戲================\n\n";
	while(true){
		cout << "猜數字範圍(不包含)" << min << "~" << max << ":";
		cin >> keyin;
		count += 1;
		if(keyin > min && keyin < max){	
			//輸入範圍正確的
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}else if(keyin > guess){
				cout << "再小一點";
				max = keyin;
			}else if(keyin < guess){
				cout << "再大一點";
				min = keyin;
			}
			cout << "您已經猜了" << count << "次" << endl;
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
	}
}
