#include <iostream>
class Rectangle{
	public:
		int width;
		int height;
		int area(){
			return width * height;
		}
};

using namespace std;
int main() {
	Rectangle rec1;
	rec1.width = 50;
	rec1.height = 100;
	cout << "面積是" << rec1.area() << endl;

	Rectangle rec2;
	rec2.width = 10;
	rec2.height = 30;
	cout << "面積是" << rec2.area() << endl;
}
