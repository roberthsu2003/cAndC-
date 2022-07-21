#include <iostream>
#include <time.h>

using namespace std;
int main() {
	srandom(time(NULL));
	int min = 1;
	int max = 99;
	int guess_value = random() % (max-min+1) + min;
	int keyin;
	int count = 0;
	cout << min << "~" << max << "的亂數是:" << guess_value << endl;
	cout << "==============猜數字遊戲===================\n\n";
	while(true){
		printf("猜數字範圍%d~%d:",min, max);
		cin >> keyin;
		count += 1;
		if(keyin >= min && keyin <= max){
			if(keyin == guess_value){
				cout << "猜中了" << endl;
				cout << "您共猜了" << count << "次" << endl;
				break;
			}else if(keyin > guess_value){
				cout << "再小一點" << endl;
				max = keyin;
				
			}else if(keyin < guess_value){
				cout << "再大一點" << endl;
				min = keyin;
			}
			cout << "您已經猜了" << count << "次" << endl;
		}else{
			cout << "超出min~max的範圍" << endl;
			cout << "您已經猜了" << count << "次" << endl;
		}
		
	}
	cout << "遊戲結束\n";
}
