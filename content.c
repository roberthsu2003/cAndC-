#include <iostream>
using namespace std;
#include <time.h>
int main() {
	srand(time(NULL));
	int keyin;
	int count = 0;
	int guess = rand() % 10 + 1;
	cout << "============猜數字遊戲============:\n\n";
	while(true){
		cout << "猜數字:";
		cin >> keyin;
		count += 1;
		if(keyin == guess){
			cout << "猜中了" << endl;
			cout << "您猜了" << count << "次" << endl;
			break;
		}else{
			cout << "沒有猜中" << endl;
		}
	}
	cout << "遊戲結束" << endl;
}
