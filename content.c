#include <iostream>
using namespace std;
namespace Ford{
	class Car{
		public:
			static int count;
			int speed;
			void turbo(int);
	};

	void Car::turbo(int s){
		speed += s;
		//使用this的寫法
		//this -> speed += s;
	}

}

using namespace Ford;

int main() {
	Car car1;
	car1.speed = 70;
	cout << "現在的速度=" << car1.speed << endl;
	car1.turbo(10);
	cout << "加速後的速度=" << car1.speed << endl;
	Car::count = 5;

	//Ford::Car car2;
	//car2.count = 10;

	//cout << "count=" << car1.count << endl;
}
