#include <iostream>
using namespace std;

class Circle{
	public:
	int radius;
	const float PI = 3.14159;
	float area(){
		return radius*radius*PI;
	}
};

int main() {
	cout << "請輸入圓的半徑";
	/* 參考變數
	Circle oneCircle;
	cin >> oneCircle.radius;
	cout << "圓的半徑是" << oneCircle.radius << ",面積是" << oneCircle.area() << endl;
	*/

	//指標變數操控實體
	Circle *twoCircle = new Circle();
	cin >> twoCircle -> radius;
	cout << "圓的半徑是" << twoCircle->radius << ",面積是" << twoCircle -> area() << endl;
	
} 
