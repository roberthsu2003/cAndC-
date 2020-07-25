#include <iostream>
using namespace std;

namespace Ford{
	class Car{
		public:
			int speed;
			//預設的建構
			//建構式不要宣告傳出值
			Car();
	};

	Car::Car(){
		speed = 70;
	}
}


int main() {
	Ford::Car car1;
	cout << "使用Car()建構式建立後,速度是:" << car1.speed << endl;
}
