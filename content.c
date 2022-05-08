#include <iostream>
//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。

//每次改變的量都不一定時,就不知道要執行的次數
using namespace std;
int main() {
	int deposit=0;
	int inputValue;
	int num = 0;
	while(deposit<30000){
		
		cout << "請輸入第" << ++num << "個月分的存款";
		cin >> inputValue;
		deposit += inputValue;
	}
	cout << "恭喜!已經存夠了,存了"<< num << "個月的總存款為:" << deposit << "元" << endl;
}
