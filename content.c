#include <iostream>
using namespace std;

class Rectangle{
	public:
		int width;
		int height;

		//自訂的建構式
		Rectangle(int w, int h){
			width = w;
			height = h;
		}
		
		int area(){
			return width * height;
		}
};

int main() {
	int width,height;
	cout << "請輸入width:";
	cin >> width;
	cout << "請輸入height:";
	cin >> height;
	
	Rectangle rec1(width,height);
	cout << "面積是" << rec1.area() << endl;
}
