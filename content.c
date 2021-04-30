#include <iostream>
using namespace std;
//callByValue

int turbo(int mySpeed){
	cout << "加速前的速度:" << mySpeed << endl;
	mySpeed += 10;
	return mySpeed;
}

int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	speed = turbo(speed);
	cout << "加速後的速度:" << speed << endl;
}
