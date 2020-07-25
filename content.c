#include <iostream>
using namespace std;

namespace Ford{
	class Car{
		private:
			int speed=0;

		public:
			void turbo(int);
			int getSpeed();
	};

	void Car::turbo(int s){
		speed += s;
	}

	int Car::getSpeed(){
		return speed;
	}
}

int main() {
	Ford::Car car1;
	cout << "尚未加速前的速度:" << car1.getSpeed() << endl;
	car1.turbo(30);
	cout << "加速後的速度:" << car1.getSpeed() << endl;
}
