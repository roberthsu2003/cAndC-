#include <iostream>
#include "circle.h"


using namespace std;



int main() {
	Circle c1(20);
	cout << "圓半徑是" << c1.radius << endl;
	cout << "圓周是" << c1.circumference() << endl;
	cout << "圓面積" << c1.areas() << endl;
}



circle.h


#include <cmath>

class Circle{
	public:
		//field欄位
		int radius;
		//建構式
		Circle(int r){
			radius = r;
		}
		//method方法
		float areas(){
			return M_PI * radius * radius;
		}
	
		float circumference(){
			return radius * 2 * M_PI;
		}
};
