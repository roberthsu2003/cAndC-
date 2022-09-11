#include <iostream>
float temperature(int value){
	return 1.8 * value + 32;
}

using namespace std;
int main() {
	int celsius;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> celsius;
	result = temperature(celsius);
	cout << "華氏溫度是" << result << endl;
}
