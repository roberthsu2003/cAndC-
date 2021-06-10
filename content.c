#include <iostream>
#include <stdio.h>

int main() {
	double PI = 3.1415987;
	int radius;
	std::cout << "請輸入半徑:";
	std::cin >> radius;
	std::cout << "圓面積=" << PI * radius * radius << std::endl;
	printf("圓面積=%.5f\n", PI * radius * radius);
}
