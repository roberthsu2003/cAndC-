#include <iostream>
#include "tools.h"
using namespace std;



int main() {
	int inputValue;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> inputValue;
	result = temperature(inputValue);
	cout << "華氏溫度=" << result << endl;
	sayHello();
	return 0;
}


tools.h
#include <iostream>
using namespace std;
//宣告函式原型
float temperature(int);
void sayHello();
//實作原型
float temperature(int value){
	return 1.8 * value + 32;
}
void sayHello(){
	cout << "Hello!World";
}
