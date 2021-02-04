#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int speed;
	cout << "請輸入初始速度:";
	cin >> speed;
	speed = turbo(speed);
	cout << "加速後的速度:" << speed << endl;
	return 0;	
}


tools.h
#include <iostream>
using namespace std;

int turbo(int);
int turbo(int speed){
	speed += 10;
	return speed;
}
