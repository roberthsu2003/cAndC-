#include <iostream>
using namespace std;

class Car{
	public:
	int speed;
	//自訂的建構式，就是要讓所有欄位一開始就有值
	Car(){
		speed = 70;
	}

	Car(int s){
		speed = s;
	}
};

int main() {
	Car car1;		
	cout << car1.speed << endl;

	Car car2(60);
	cout << car2.speed << endl;
}
