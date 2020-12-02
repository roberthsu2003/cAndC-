#include <iostream>
#include "stdlib.h"

using namespace std;

int main() {
	double PI = 3.1415915987;
	int radius = 9;
	cout << "圓面積=" << PI * radius * radius << endl;
	printf("圓面積=%.2f\n",PI * radius * radius);
}
