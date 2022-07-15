#include <iostream>
#include <time.h>

using namespace std;
int main() {
	srandom(time(NULL));
	int min = 1;
	int max = 99;
	int guess_value = random() % (max-min+1) + min;
	int keyin;
	cout << min << "~" << max << "的亂數是:" << guess_value << endl;
	cout << "==============猜數字遊戲===================\n\n";
	while(true){
		printf("猜數字範圍%d~%d:",min, max);
		cin >> keyin;
		if(keyin >= min && keyin <= max){
			if(keyin == guess_value){
				cout << "猜中了" << endl;
				break;
			}else{
				cout << "猜錯了" << endl;
			}
		}else{
			cout << "超出min~max的範圍";
		}
		
	}
}
