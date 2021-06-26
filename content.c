#include <iostream>
using namespace std;
/*
void turbo(int *s){
	*s += 20;
}
*/

int turbo(int s){
	return s + 20;
}

int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	speed = turbo(speed);
	cout << "加速後的速度:" << speed << endl;
	return 0;
}
