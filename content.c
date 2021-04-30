#include <iostream>
using namespace std;

void turbo(int *mySpeed){
	cout << "加速前的速度:" << *mySpeed << endl;
	*mySpeed += 10;
}
int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	turbo(&speed);
	cout << "加速後的速度:" << speed << endl;
	return 0;
}
