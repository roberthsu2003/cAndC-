//============================================================================
// Name        : new1.cpp
// 建構式


#include <iostream>
using namespace std;
class Car{
	public:
		int speed;
		Car(){
			this->speed = 70;
		}

		Car(int n){
			this->speed = n;
		}
};



int main() {
	Car BMW;
	cout << "執行Car BMW建立物件後，速度=" << BMW.speed << endl;

	Car BMW1(95);
	cout << "執行Car BMW2建立物件後，速度=" << BMW1.speed << endl;

	return 0;
}
