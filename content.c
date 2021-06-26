main.cpp

#include <iostream>
#include "rectangle.h"

using namespace std;



int main() {
	Rectangle rec;
	cout << "請輸入width:";
	cin >> rec.width;
	cout << "請輸入height:";
	cin >> rec.height;
	cout << "矩形的面績是:" << rec.width * rec.height << endl;
}



