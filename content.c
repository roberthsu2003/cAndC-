#include <iostream>
#include "circle.h"


using namespace std;



int main() {
	Circle c1(20);
	cout << "圓半徑是" << c1.radius << endl;
	cout << "圓周是" << c1.circumference() << endl;
	cout << "圓面積" << c1.areas() << endl;
}


