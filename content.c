#include <iostream>
using namespace std;
int main() {
	int deposit = 0;
	int inputNum;
	while(deposit < 30000){
		cout << "請輸入每月的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	cout << "恭喜!已經存夠了總存款為:" << deposit << "元。\n";
} 
