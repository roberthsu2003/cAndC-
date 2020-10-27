#include <iostream>

//原型
float temperature(int);

int main() {
	int value;
	float result;
	std::cout << "請輸入攝氏溫度:";
	std::cin >> value;
	result = temperature(value);
	std::cout << "華氏溫度=" << result << std::endl;
	return 0;
}

float temperature(int value){
	return value * (9/5.0) + 32;
}
