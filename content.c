#include <iostream>

int main() {
	int intA;
	printf("請輸入國文成績:");
	std::cin >> intA;

	int intB;
	printf("請輸入數學成績:");
	std::cin >> intB;

	printf("國文分數是%d\n數學分數是%d\n",intA,intB);  
	return 0;
}
