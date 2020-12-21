#include <iostream>

float temperature(int value){
	return 1.8 * value + 32;
}

int main() {
	int inputValue;
	float result;
	std::cout << "請輸入攝氏溫度:";
	std::cin >> inputValue;
	result = temperature(inputValue);
	std::cout << "華氏溫度=" << result << std::endl;
}
