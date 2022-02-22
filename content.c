#include <iostream>
using namespace std;
int main() {
	int deposit=0;
	int num = 0;
	int inputNum;
	//不明確要執行的次數，請用while迴圈
	while(deposit < 30000){
		cout << "請輸入第" << ++num << "個月份的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}

	cout << "恭喜!已經存夠了，存了" << num << "個月的總存款為:" << deposit << endl;
}
