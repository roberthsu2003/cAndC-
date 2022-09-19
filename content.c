//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。
#include <iostream>
using namespace std;
int main() {
	int deposit=0,inputMoney,month=0;
  while(deposit<30000){
		month += 1;
		cout << "請輸入第" << month << "月的存款:";
		cin >> inputMoney;
		deposit += inputMoney;
	}
	cout << "已經存了" << month << "個月,共存了" << deposit << "元\n";
}
