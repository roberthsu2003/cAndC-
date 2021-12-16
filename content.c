#include <iostream>
using namespace std;
int main() {
	int deposit = 0;
	int num = 0;
	int inputNum;
	while(deposit < 30000){
		num += 1;
		cout << "請輸入第"<< num <<"月的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	cout << "恭喜!已經存了" << num << "月總存款為:" << deposit << "元。\n";
} 
