#include <iostream>
using namespace std;

int main() {
	int deposit=0, inputNum;
	while(deposit < 30000){
		cout << "請輸入這個月份的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	cout << "恭喜!已經存夠了，存了" << deposit << endl;
	return 0;
}
