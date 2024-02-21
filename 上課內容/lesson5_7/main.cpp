#include <iostream>
using namespace std;
//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。

int main() {
	int deposite = 0;
	int inputValue;
	while (true) {
		cout << "請輸入本月份的存款";
		cin >> inputValue;
		deposite += inputValue;
		if(deposite >= 30000){
			break;
		}
	}

	cout << "恭喜!已經存夠了，存了" << deposite << "元\n";
}
