#include <iostream>
#include <time.h>

using namespace std;
int main() {
	int guess;
	int max = 99;
	int min = 1;
	int keyin;
	int count = 0;
	srandom(time(NULL));
	guess = random() % (max-min+1) + min;
	cout << "================猜數字遊戲=================\n\n";
	cout << "數字:" << guess << endl;
	while(true){
		printf("猜數字範圍%d~%d:",min,max);		
		cin >> keyin;
		count += 1;
		if(keyin >= min && keyin <= max){
			//輸入的範圍正確
			if(keyin == guess){
				cout << "賓果!猜對了,答案是:" << guess << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}else{
				cout << "錯了!您已經猜了" << count << "次" << endl;
			}
		}else{
			//輸入的範圍不正確
			cout << "請輸入提示範圍內的數字!" << endl;
			continue;
		}
	}
}
