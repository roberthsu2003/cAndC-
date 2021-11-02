#include <iostream>
class Car{
	private:
		int speed=0;

	public:
		Car(int s);

};

Car::Car(int s){
	speed = s;
}

int main() {
	Car car1 = Car(50);
	
} 
