#include <iostream>
using namespace std;

	class Car{
		public:
			//類別的欄位(靜態成員變數)
			static int turboCount;
			int speed;
			void turbo(int);
	};

	int Car::turboCount = 0;

	void Car::turbo(int s){
		speed += s;
		turboCount += 1;
		//使用this的寫法
		//this -> speed += s;
	}
	




int main() {
	Car car1;
	car1.speed = 70;
	cout << "現在的速度=" << car1.speed << endl;
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	cout << "加速後的速度=" << car1.speed << endl;
	cout << "已經加速多少次:" << Car::turboCount << endl;
	
}
