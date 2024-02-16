#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int tall, weight;
	double Tall, BMI;

	cout << "請輸入身高(公分):";
	cin >> tall;

	Tall=tall/100.0;//將公分轉換成公尺

	cout << "請輸入體重(公斤):";
	cin >> weight;

	BMI = weight/pow(Tall,2);
	//cout << "您的BMI是" << BMI << endl;
	printf("您的BMI是%.2lf\n",BMI);
	
}
