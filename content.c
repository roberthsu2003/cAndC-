#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
int main() {
	int guess;
	int keyin;
	int count = 0;

	srand(time(NULL));
	guess = rand() % 10 + 1;
	cout << guess << endl;
	while(true){
		count += 1;
		cout << "猜數字範圍1~10:";
		cin >> keyin;
		if(keyin == guess){
			cout << "猜對了" << endl;
			cout << "您猜了" << count << "次" << endl;
			break;
		}else{
			cout << "猜錯了" << endl;
		}
	};
	return 0;
}
