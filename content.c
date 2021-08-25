#include <iostream>
#define PI 3.14159

class Circle{
	public:
		int radius;
		float area(){
			return PI * radius * radius;
		}
};

float getCirceArea(int radius){
	return PI * radius * radius;
}

using namespace std;

int main() {
	Circle c1;
	c1.radius = 10;
	cout << "半徑是:" << c1.radius << ",面積是:" << c1.area() << endl;

	Circle c2;
	c2.radius = 20;
	cout << "半徑是:" << c2.radius << ",面積是:" << c2.area() << endl;

	int radius;
	cout << "請輸入半徑:";
	cin >> radius;
	cout << "半徑是:" << radius << ",面積是:" << getCirceArea(radius) << endl;
	return 0; 
}
