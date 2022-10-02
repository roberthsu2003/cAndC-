#include <iostream>
#include <math.h>

using namespace std;

int area(int side){
	return pow(side,2);
}

int area(int w, int h){
	return w * h;
}

int main() {
	int one_side;
	int width,height;	
	cout << "請輸入正方形的一邊:";
	cin >> one_side;
	cout << "請輸入矩形的長和寬:(空一格):";
	cin >> width >> height;

	cout << "正方形的面積是" << area(one_side) << endl;
	cout << "矩形的面積是" << area(width, height) << endl;
	
}
