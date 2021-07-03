#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
	Rectangle rec1;
	rec1.width = 10;
	rec1.height = 20;

	cout << "rec1的寬是" << rec1.width << "rec1的高是" << rec1.height << "rec1的面積是" << rec1.area() << endl;

}


