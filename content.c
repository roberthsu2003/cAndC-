#include <iostream>
using namespace std;

class Car{
	public:
	static int total;
	Car();
};

int Car::total = 0;

Car::Car(){
	total += 1;
}

int main() {	
	cout << "一開始建立車的數量是" << Car::total << endl;
	Car car1;
	Car car2;
	Car car3;
	cout << "已經建立車的數量是" << Car::total << endl;
	return 0;
}
