#include <iostream>
using namespace std;

class Vehicle{
	public:
		int a1;
		Vehicle();
		void methodA();
	
	private:
		int a2;
	
	protected:
		int a3;
};

Vehicle::Vehicle(){
	a1 = 1;
}

void Vehicle::methodA(){
	cout << "這是Vehicle的methodA" << endl;
}







class Car:public Vehicle{
	public:
		int b1;
		void methodB();
};

void Car::methodB(){
	a1 = 8;	
	a3 = 7;
}






int main() {
	Vehicle vehicle;
	Car car;
	cout << "vehicle 中的a1的值:" << vehicle.a1 << endl;
	cout << "car 中的a1的值:" << car.a1 << endl;
	//cout << "car 中的a3的值:" << car.a3 << endl; //錯誤

	car.methodA();
	car.methodB();
	cout << "Vehicle 中的a1的值:" << vehicle.a1 << endl;
	cout << "Car中的a1的值:" << car.a1 << endl;
}
