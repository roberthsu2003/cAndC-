#include <iostream>
using namespace std;

	class Car{
		public:
			//類別的欄位(靜態成員變數)
			static int turboCount;
			int speed;
			void turbo(int);
			//類別的方法(靜態方法)
			//必需實作在class內
			int static getCount(){
				return turboCount;
			}
	};

	//靜態成員變數一定要在外部給預設值
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
	cout << "car1現在的速度=" << car1.speed << endl;
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	cout << "加速後的速度=" << car1.speed << endl;
	

	Car car2;
	car2.speed = 30;
	cout << "car1現在的速度=" << car2.speed << endl;
	car2.turbo(1);
	car2.turbo(1);
	car2.turbo(1);
	cout << "加速後的速度=" << car2.speed << endl;

	cout << "加速了多少次(靜態成員變數):" << Car::turboCount << endl;
	cout << "加速了多少次:(靜態方法)" << Car::getCount() << endl;
	
}
