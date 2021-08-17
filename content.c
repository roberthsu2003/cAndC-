#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int keyin;
	int guess = rand() % 10 + 1;
	int count = 0;
	cout << "============猜數字遊戲=============\n\n";
	while(true){
		cout << "請輸入數字:";
		cin >> keyin;
		count += 1;
		if(keyin == guess){
			cout << "賓果!猜對了,答案是" << guess << endl;
			cout << "您猜了" << count << "次\n\n";
			break;
		}else{
			cout << "沒有猜中" << endl;
		}
	}
	cout << "遊戲結束\n";
	
}
