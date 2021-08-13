#include <iostream>
using namespace std;

int main() {
	int deposit=0, inputNum, num=0;
	while(deposit < 30000){
		num += 1;
		cout << "請輸入第" << num << "個月份的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	cout << "恭喜!已經存夠了，存了"<< num << "個月,共存了"<<deposit << endl;
	return 0;
}
