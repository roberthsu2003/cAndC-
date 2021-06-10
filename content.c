#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double PI = 3.1415987;
	int radius;
	int area;
	cout << "請輸入半徑:";
	cin >> radius;
	area = PI * radius * radius;
	cout << "圓面積=" << area << endl;
	printf("圓面積=%d\n", area);
}
