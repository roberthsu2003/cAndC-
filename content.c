#include <iostream>
using namespace std;
class Car{
	public:
	//實體欄位
	int speed;
	//自訂的建構式
	Car();
	Car(int s);
};
//實作建構式
Car::Car(){
	speed = 20;
}
Car::Car(int s){
	speed = s;
}

int main() {
	Car car1(70); //呼叫建構式
	cout << "car1的速度是" << car1.speed << endl;

	Car car2; //呼叫建構式
	cout << "car2的速度是" << car2.speed << endl; 
	return 0;
}
