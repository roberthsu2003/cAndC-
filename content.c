#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int deposit=0,num=0,inputNum;
	while(deposit<30000){
		num++;
		cout << "請輸入第" << num << "個月份的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	
	cout << "恭喜!已經存夠了,存了" << num << "個月的總存款為:" << deposit << "元";
	return 0;
}
