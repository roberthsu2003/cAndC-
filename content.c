#include <iostream>

using namespace std;
int main() {
	int deposite = 0;
	int count = 0;
	int inputNum;
	while(deposite < 53500){
		count += 1;
		cout << "請輸入第" << count << "個月份的存款:";
		cin >> inputNum;
		deposite += inputNum;
	}

	cout << "已經存夠了!存了" << count << "個月,總存款為:" << deposite << "元。";
} 
