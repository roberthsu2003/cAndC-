#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	turbo(&speed);
	cout << "加速後的速度:" << speed << endl;
}



tools.h
#include <iostream>
using namespace std;
//原型宣告
void turbo(int*);

//宣作
void turbo(int* mySpeed){
	*mySpeed += 10;
}
