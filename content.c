#include <iostream>
using namespace std;

int area(int side){
	return side * side;
}

int area(int side, int anotherSide){
	return side * anotherSide;
}

int main() {
	cout << "正方形=" << area(10) << endl;
	cout << "矩形面積=" << area(10, 15);
}
