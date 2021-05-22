#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double PI = 3.1415915987;
	double radius;
	cout << "請輸入半徑:";
	cin >> radius;
	//int area = radius * radius * PI;
	double area = radius * radius * PI;
	//c++的輸出
	cout << "圓面積=" << area << endl;

	//c的輸出
	printf("圓面積=%.2f", area);
}
