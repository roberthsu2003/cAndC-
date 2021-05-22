#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double PI = 3.1415915987;
	int radius = 9;
	//c++的輸出
	cout << "圓面積=" << radius * radius * PI << endl;

	//c的輸出
	printf("圓面積=%.2f",radius * radius * PI);
}
