#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	Square *s1 = new Square(10);
	cout << "s1的寬是:" << s1->width << endl;
	cout << "s1的面積是:" << s1->getArea() << endl;
}
