#include <iostream>
using namespace std;

int main() {
	int deposit=0;
	int inputNum;
	int num=0;

	while(deposit < 30000){
		num += 1;
		cout << "請輸入第" << num << "個月的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	//cout << "恭喜!已經存夠了，存了" << num << "個月的總存款為:" << deposit << "元" << endl;
	printf("恭喜!已經存夠了，存了%d個月的總存款為:%d元\n",num,deposit);
	return 0;
}
