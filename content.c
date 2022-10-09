#include "size.h"
#include <iostream>

//實體配合function的使用,使用call by reference
void addTwo(Size &s){
	s.x += 2;
	s.y += 2;
}
using namespace std;
int main() {
  Size tri1(10, 20);
  Size tri2(25, 30);
	addTwo(tri1);
	addTwo(tri2);
	cout << "tri1-" << tri1.x << "-" << tri1.y << endl;
	cout << "tri2-" << tri2.x << "-" << tri2.y << endl;
}
