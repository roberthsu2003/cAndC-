#include <iostream>
class Car{
	private:
		int _speed=0;

	public:
		Car(int s);
		int getSpeed();

};

Car::Car(int s){
	_speed = s;
}

int Car::getSpeed(){
	return _speed;
}

using namespace std;
int main() {
	Car car1 = Car(50);
	cout << "汽車的速度是" << car1.getSpeed() << endl;
	return 0;
} 
