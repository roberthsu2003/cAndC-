//Car.h
class Car{
	private:
		int speed;
	
	public:
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
	BMW.setSpeed(58);
	cout << "現在速度=" << BMW.getSpeed() << endl;
	BMW.turbo();
	cout << "加速後的速度=" << BMW.getSpeed() << endl;
	return 0;
}
