#include <iostream>
//建立area()函式多載,分別求正方形和矩形和三角形面積

using namespace std;

int area(int square) { 
	return square * square; 
}

int area(int width, int height) { return width * height; }

double area(int top, int bottom, int height) {
  return (top + bottom) * height / 2.0;
}

int main() {
  int side;
  cout << "請輸入正方形的一邊:";
  cin >> side;
  cout << "正方形的面積是" << area(10) << endl;

  int width, height;
  cout << "請輸入矩形的2邊:(一次輸入2個數值,中間空格)";
  cin >> width >> height;
  cout << "矩形的面積是" << area(width, height) << endl;

  int top, bottom;
  cout << "請輸入三角形的上底,下底和高(一次輸入3個數值,中間空格):";
  cin >> top >>  bottom >> height;
  cout << "三方形的面積是" << area(top, bottom, height) << endl;
}
