#include <iostream>
using namespace std;

float temperature(int celsius){
	return 1.8 * celsius + 32;
}

int main() {
	cout << "攝氏10度轉華氏溫度" << temperature(10) << endl;
	cout << "==================\n";
	int v1;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> v1;
	result = temperature(v1);
	cout << "華氏溫度=" << result << endl;
	return 0;
}
