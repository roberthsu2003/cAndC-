#include <iostream>
class Car{
	private:
		int _speed=0;

	public:
		Car(int s);
		int getSpeed();
		void turbo(int s);

};

Car::Car(int s){
	if(s<0){
		_speed = 0;
	}else if(s > 200){
		_speed = 200;
	}else{
		_speed = s;
	}	
}

int Car::getSpeed(){
	return _speed;
}

void Car::turbo(int s){
	_speed += s;
	if(_speed<0){
		_speed = 0;
	}else if(_speed > 200){
		_speed = 200;
	}
}

using namespace std;
int main() {
	Car car1 = Car(80);
	car1.turbo(100);
	car1.turbo(-200);	
	cout << "汽車的速度是" << car1.getSpeed() << endl;
	return 0;
} 
