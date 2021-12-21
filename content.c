#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int guessValue;
	int max = 99;
	int min = 1;
	int count = 0;
	srandom(time(NULL));
	int randomValue = random() % (max-min+1) + min;	
	cout << "============猜數字遊戲================\n\n";
	while(true){
		printf("猜數字範圍%d~%d:",min,max);
		cin >> guessValue;
		count += 1;
		if(guessValue >= min && guessValue <= max){
			if(guessValue == randomValue){
				cout << "賓果!猜對了,答案是" << guessValue << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}else if(guessValue > randomValue){
				max = guessValue - 1;
				cout << "再小一點!";
			}else{
				min = guessValue + 1;
				cout << "再大一點!";
			}
			cout << "您已經猜了" << count << "次" << endl;
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
		

	}

} 
