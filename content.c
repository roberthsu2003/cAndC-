#include <iostream>
using namespace std;
//定義function
float temperature(int value){
	return value * 1.8 + 32;
}

int main() {
	int valueC;
	float result;

	cout << "請輸入攝氏溫度:";
	cin >> valueC;
	//呼叫function
	result = temperature(valueC);
	cout << "華氏溫度=" << result << endl;
}
