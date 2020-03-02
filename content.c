//Car.h
class Car{
	private:
		int speed;
	
	public:
		Car(){
			speed = 70;
		}

		Car(int n){
			speed = n;
		}

		void turbo(){
			speed += 10;
		}

		void setSpeed(int var){
			if(var < 60){
				speed = 60;
			}else if(var > 100){
				speed = 100;
			}else{
				speed = var;
			}
		}

		int getSpeed(){
			return speed;
		}
};
//end

#include <iostream>
#include "Car.h"
using namespace std;

int main() {
	Car BMW;	
	cout << "現在速度=" << BMW.getSpeed() << endl;
	Car BMW1(95);
	cout << "BMW1的速度=" << BMW1.getSpeed() << endl;
	return 0;
}
