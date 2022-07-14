#include <iostream>
//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。
using namespace std;
int main() {
	int deposit = 0;
	int num=0;
	int inputNum;
	while(deposit < 30000){
		num++;
		cout << "請輸入第" << num << "個月分的存款:";
		cin >> inputNum;
	  	deposit += inputNum;
	}
	cout << "存夠了!存了" << num << "個月, 已經存了" << deposit << endl;
}
