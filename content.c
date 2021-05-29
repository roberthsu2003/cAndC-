#include <iostream>
using namespace std;

int main() {
	int deposit = 0,num=0, inputNum;
	while(deposit < 30000){
		num++;
		cout << "請輸入第" << num << "個月份的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	cout << "恭喜!已經存夠了，存了" << num << "個月的總存款為:" << deposit << "元。"; 
}
