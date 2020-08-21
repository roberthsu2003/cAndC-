#include <iostream>
using namespace std;
int main() {
	float PI = 3.14159;
	int radius = 10;
	//PI * radius * radius 自動轉換為float
	float area = PI * radius * radius;
	cout << "圓面積=" << area << endl;
}
