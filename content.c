#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double PI = 3.1415987;
	int radius;
	cout << "請輸入半徑:";
	cin >> radius;
	cout << "圓面積=" << PI * radius * radius << endl;
	printf("圓面積=%.5f\n", PI * radius * radius);
}
