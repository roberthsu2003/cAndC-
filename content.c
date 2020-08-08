#include <iostream>
using namespace std;

int main() {
	int deposit = 0, inputNum,num=0;
	while(deposit < 30000){
		++num;
		printf("請輸入第%d個月的存款:", num);
		cin >> inputNum;
		deposit += inputNum;
	}
	
	printf("恭喜!總共存了%d個月，已經存夠了，總存款為:%d元", num, deposit);
}
