#include <iostream>
using namespace std;

int main() {
	double PI = 3.1415915987;
	int radius = 9;
	double area = PI * radius * radius;
	cout << "圓面積=" << area << endl;
	printf("圓面積=%.2f\n", area);
}
