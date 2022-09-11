#include <iostream>
#include <time.h>

using namespace std;
int main() {
  srandom(time(NULL));
  int min = 1;
  int max = 10;
	int keyin;
	int count = 0;
  int guess = random() % (max - min + 1) + min;
	cout << "============猜數字遊戲================" << endl;
	while(true){
		cout << "猜數字的範圍" << min << "~" << max << ":";
		cin >> keyin;
		count += 1;
		if(keyin >=min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}
		}else{
			cout << "請輸入提示範圍內的數字!\n";
			continue;
		}
	}

	cout << "遊戲結束" << endl;
}
