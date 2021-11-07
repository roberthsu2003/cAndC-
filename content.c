#include <iostream>
using namespace std;

int main() {
	int top,bottom,height;
	float area;
	cout << "請輸入梯形的上底(公分):";
	cin >> top;

	cout << "請輸入梯形的下底(公分):";
	cin >> bottom;

	cout << "請輸入梯形的高(公分):";
	cin >> height;

	area = (top + bottom) * height / 2.0;

	cout << "梯形面積是:" << area << "平方公分" << endl;


} 
