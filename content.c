#include <iostream>

class Rectangle{
	public:
		int width;
		int height;

		Rectangle(int w, int h){
			width = w;
			height = h;
		}
		int perimeter(){
			return width*2 + height*2;
		}

		double area(){
			return width * height;
		}
		
	
};
using namespace std;

int main() {
	Rectangle r1(10,20);
	Rectangle r2(50,60);
	cout << "r1周長:" << r1.perimeter() << endl;
	cout << "r1面積:" << r1.area() << endl;

	cout << "r2周長:" << r2.perimeter() << endl;
	cout << "r2面積:" << r2.area() << endl;
}
