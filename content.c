#include <iostream>

//原型
float temperature(int);

int main() {
	int value;
	float result;
	std::string runAgain;
	do{
		std::cout << "請輸入攝氏溫度:";
		std::cin >> value;
		result = temperature(value);
		std::cout << "華氏溫度=" << result << std::endl;
		std::cout << "程式還要繼續嗎?(輸入N...結束):";
		std::cin >> runAgain;
		if(runAgain == "N"){
			break;
		}

	}while(true);
	
	return 0;
}

float temperature(int value){
	return value * (9/5.0) + 32;
}
