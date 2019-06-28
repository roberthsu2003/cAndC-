//============================================================================
// Name        : while1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊告知。
#include <iostream>
using namespace std;

int main() {
	int deposit = 0, count = 0, n;
	while(deposit < 30000){
		count++;
		cout << "請輸入第" << count << "個月份的存款:";
		cin >> n;
		deposit += n;
	}
	cout << "存了" << count << "個月的總存款為:" << deposit << "元。\n已經足夠購買機車。";
	return 0;
}
