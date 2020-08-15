#include <iostream>
void turbo(int&);

using namespace std;

int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	turbo(speed);
	cout << "加速後的速度:" << speed << endl;
	return 0;
}

void turbo(int &speed){
	cout << "加速前的速度:" << speed << endl;
	speed += 10;
}
