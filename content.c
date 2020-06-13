//輸入半徑,計算出圓面積

#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
	double radius;
	cout << "請輸入圓半徑:";
	cin >> radius;
	cout << "半徑" << radius << "的圓面積是" << radius * radius * PI;
}
