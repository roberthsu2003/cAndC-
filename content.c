#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		float areas(){
			return 3.14159 * radius * radius;
		}
	
		float circumference(){
			return radius * 2 * 3.14159;
		}
};

int main() {
	Circle c1;
	c1.radius = 10;
	cout << "圓半徑是" << c1.radius << endl;
	cout << "圓周是" << c1.circumference() << endl;
	cout << "圓面積" << c1.areas() << endl;
}
