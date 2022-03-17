#include <iostream>
using namespace std;

class Rectangle{
	public:
		int width;
		int height;
		
		int area(){
			return width * height;
		}
};


int main() {
	Rectangle* rec1 = new Rectangle();//使用指標變數控制實體
	cout << "請輸入矩形的寬:";
	cin >> rec1 -> width;
	cout << "請輸入矩形的高:";
	cin >> rec1 -> height;		
	cout << "面積是" << rec1 -> area() << endl;

	
}
