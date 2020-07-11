//call by value

#include <iostream>
using namespace std;
int turbo(int);

int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	speed = turbo(speed);
	cout << "加速後的速度:" << speed << endl;
	return 0; 
}

int turbo(int speed){
	cout << "加速前的速度:" << speed << endl;
	return speed += 10;
}
