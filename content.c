#include <iostream>
using namespace std;
//定義Square
class Square {
public:
  int width = 0;
  int area() { return width * width; }
};

class Rectangle{
	public:
		int width = 0;
		int height = 0;
		int area(){
			return width * height;			
		}
};

class Trapezoid{
	public:
		int top = 0;
		int height = 0;
		int bottom = 0;
		double area(){
			return (top + bottom) * height / 2.0;
		}
};



int main() {
	Square s; //建立實體
	s.width = 10;  
	cout << "正形:" << s.width << endl;
	cout << "正形面積:" << s.area() << endl;

	Rectangle r;
	r.width = 30;
	r.height = 20;
	cout << "矩形的寬:" << r.width << "高:" << r.height << endl;
	cout << "矩形的面積:" << r.area() << endl;

	Trapezoid t;
	t.top = 10;
	t.bottom = 20;
	t.height = 15;
	cout << "梯形的上底:" << t.top << ",下底:" << t.bottom << ",高" << t.height << endl;

	cout << "梯形的面積:" << t.area() << endl;
	
}
