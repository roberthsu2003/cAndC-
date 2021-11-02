#include <iostream>

class Square{
	public:
		int width;
		int getArea(){
			return width * width;
		}
};

using namespace std;
int main() {
	Square sq = Square();
	sq.width = 10;
	cout << "正方型的面積是" << sq.getArea() << endl;
} 
