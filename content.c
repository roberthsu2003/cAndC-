//Car.h
class Car{
	public:
		int speed;
		void turbo(){
			speed += 10;
		}
};
//end

#include <iostream>
#include "Car.h"
using namespace std;

int main() {
	Car BMW;
	BMW.speed = 70;
	cout << "現在的速度=" << BMW.speed << endl;
	BMW.turbo();
	cout << "加速後的速度是" << BMW.speed << endl;
}
