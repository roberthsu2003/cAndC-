#include <iostream>
class Square{
	public:
		int width;
		int getSquareArea(){
			return width * width;
		}
};

class Rectangle:public Square{
	public:
		int height;
		int getRectangleArea(){
			return width * height;
		}
};

class Triangle:public Rectangle{
	public:
		int getTriangleArea(){
			return width * height / 2.0;
		}
};

using namespace std;
int main() {
	Square sq;
	sq.width = 10;
	cout << "正方型的面積是" << sq.getSquareArea() << endl;

	Rectangle rec;
	rec.width = 10;
	rec.height = 50;
	cout << "矩型面積是:" << rec.getRectangleArea() << endl;

	Triangle tri;
	tri.width = 10;
	tri.height = 50;
	cout << "三角型的面積是:" << tri.getTriangleArea() << endl;
} 
