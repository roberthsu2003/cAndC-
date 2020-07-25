#include <iostream>
using namespace std;

namespace Ford{
	class Car{
		public:
			int speed;
			//預設的建構
			//建構式不要宣告傳出值
			Car();

			//建構式的多載
			Car(int);
	};

	Car::Car(){
		this -> speed = 70;
	}

	Car::Car(int s){
		this -> speed = s;
	}

}


int main() {
	Ford::Car car1;
	cout << "使用Car()建構式建立後,速度是:" << car1.speed << endl;

	Ford::Car car2(100);
	cout << "使用Car(int s)建構式建立後,速度是:" << car2.speed << endl;
}
