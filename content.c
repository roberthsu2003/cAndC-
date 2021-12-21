#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int guessValue;
	int max = 99;
	int min = 1;
	srandom(time(NULL));
	int randomValue = random() % (max-min+1) + min;
	cout << randomValue << endl;
	cout << "============猜數字遊戲================\n\n";
	while(true){
		printf("猜數字範圍%d~%d:",min,max);
		cin >> guessValue;
		if(guessValue >= min && guessValue <= max){
			if(guessValue == randomValue){
				cout << "猜中了" << endl;
				break;
			}else{
				cout << "沒有猜中" << endl;
			}
		}else{
			cout << "請輸入提示範圍內的數字!\n";
		}
		

	}

} 
