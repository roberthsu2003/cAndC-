#include <iostream>
using namespace std;

int main() {
	int deposit=0;
	int inputValue;
	int month = 0;
	while(deposit < 30000){
		month++;
		cout << "請輸入第" << month << "存款:";
		cin >> inputValue;
		deposit += inputValue;
	}
	cout << "存夠了,共存了" << deposit << endl;
} 
