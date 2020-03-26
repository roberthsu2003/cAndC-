#include <iostream>
using namespace std;

class Car{
	private:
		int speed;
	public:
		//speed(getter, setter)
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

		//自訂建構式
		Car(){
			speed = 70;
		}

		Car(int n){
			setSpeed(n);
		}

};

int main() {
	Car bmw;
	cout << "執行Car bmw建立物件後,速度=" << bmw.getSpeed() << endl;

	Car bmw1(45);
	cout << "執行Car bmw1建立物件後,速度=" << bmw1.getSpeed() << endl;
}
