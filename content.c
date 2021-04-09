#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	double PI = 3.1415987;
	int radius = 9;
	
	cout << "圓面積=" << PI * radius * radius << endl;
	printf("圓面積=%.2f\n半徑是=%d\n", PI * radius * radius, radius);

}
