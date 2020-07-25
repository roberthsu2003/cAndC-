#include <iostream>
using namespace std;

class Rectangle{
	public:
		int width;
		int getArea(){
			return width * height;
		}
	protected:
		int height;
};

class Triangle:public Rectangle{
	public:
		Triangle(){
			width = 5;
			height = 6;
		}

		int getArea2(){
			return (width * height) / 2;
		}
};

int main() {
	Rectangle rectangle;
	cout << rectangle.getArea() << endl;

	Triangle triangle;
	cout << "矩形面積 = " << triangle.getArea() << endl;
	cout << "===================" << endl;
	cout << "三角形面積 = " << triangle.getArea2() << endl;
}
