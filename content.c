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

}
