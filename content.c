#include <iostream>
using namespace std;
class Car{

	public:
		void turbo(int sp){
			speed = sp;
			cout << "現在的速度是" << speed << endl;
		}
	private:
		int speed;
	protected:


};

int main() {
 Car car1;
 car1.turbo(50);
 car1.turbo(90);
 
 Car car2;
 car2.turbo(80);
}
