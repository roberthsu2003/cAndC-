#include <iostream>
using namespace std;
int main() {
	int height;
	int weight;
	float bmi;
	cout << "=======計算BMI==========\n";
	cout << "請輸入身高(公分):";
	cin >> height;
	cout << "請輸入體重(公斤):";
	cin >> weight;
	bmi = weight / ((height/100.0) * (height/100.0));
	printf("您的BMI是%.2f\n", bmi);
	return 0;
}
