#include <iostream>
using namespace std;
//call by value
int turbo(int);

int main() {
	int speed;
	cout << "請輸入初速度:";
	cin >> speed;
	speed = turbo(speed);
	cout << "加速後的速度:" << speed << endl;
}

int turbo(int speed){
	cout << "加速前速度" << speed << endl;
	return speed += 10;
}
