#include <iostream>
using namespace std;

class Car{
	private:
		int speed;

	public:
		void setSpeed(int sp){
			if(sp < 60){
				speed = 60;
			}else if(sp > 100){
				speed = 100;
			}else{
				speed = sp;
			}
		}

		int getSpeed(){
			return  speed;
		}

		void turbo(){
			setSpeed(speed + 10);
		}
};

int main() {
	Car bmw;	
	bmw.setSpeed(58);
	cout << "現在的速度=" << bmw.getSpeed() << endl;
	bmw.setSpeed(102);
	cout << "現在的速度=" << bmw.getSpeed() << endl;
	bmw.turbo();
	cout << "現在速度=" << bmw.getSpeed() << endl; 
}
