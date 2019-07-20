//============================================================================
// Name        : speed2.cpp
// 使用private 保護欄位


#include <iostream>
using namespace std;

class Car{
	private:
	 int speed;

	public:
		void turbo(){
			this -> speed = this -> speed+1;
		}

		void setSpeed(int var){
			if(var < 60){
				speed = 60;
			}else if (var > 100){
				speed = 100;
			}else{
				speed = var;
			}

		}

		int getSpeed(){
			return speed;
		}
};


int main() {
	Car BMW;
	BMW.setSpeed(58);
	cout << "現在速度=" << BMW.getSpeed()<< endl;
	BMW.turbo();
	cout << "現在速度=" << BMW.getSpeed() << endl;
	return 0;
}
