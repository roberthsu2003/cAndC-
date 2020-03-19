#include <iostream>
using namespace std;
//call by reference 只有c++有

void turbo(int&);

int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	turbo(speed);
	cout << "加速後的速度:" << speed << endl;
	return 0;
}

void turbo(int& speed){
	cout << "加速前速度:" << speed << endl;
	speed += 10;
}
