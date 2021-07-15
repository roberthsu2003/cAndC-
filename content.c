#include <iostream>
#include <cmath>


using namespace std;

class Circle{
	public:
		int radius;
		float areas(){
			return M_PI * radius * radius;
		}
	
		float circumference(){
			return radius * 2 * M_PI;
		}
};

int main() {
	Circle c1;
	c1.radius = 10;
	cout << "圓半徑是" << c1.radius << endl;
	cout << "圓周是" << c1.circumference() << endl;
	cout << "圓面積" << c1.areas() << endl;
}
