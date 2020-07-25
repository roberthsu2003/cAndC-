#include <iostream>
using namespace std;
namespace Ford{
	class Car{
		public:
			int speed;
			void turbo(int);
	};

	void Car::turbo(int s){
		speed += s;
	}

}

int main() {
	Ford::Car car1;
	car1.speed = 70;
	cout << "現在的速度=" << car1.speed << endl;
	car1.turbo(10);
	cout << "加速後的速度=" << car1.speed << endl;
}
