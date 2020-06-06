#include <iostream>
using namespace std;

int main() {
	float PI = 3.14159;
	int radius = 10;
	cout << "圓面積=" << radius * radius * PI << endl;

	int area = radius * radius * PI;
	cout << "圓面積=" << area << endl;

	float area1 = radius * radius * PI;
	cout << "圓面積=" << area1;
}
