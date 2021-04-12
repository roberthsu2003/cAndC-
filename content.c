#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	float num1, num2 , num3;
	float result=0.0;
	cout << "請輸入3個數值,格式[值1,值2,值3]:";
	scanf("%f,%f,%f",&num1, &num2, &num3);
	result += num1;
	result += num2;
	result += num3;
	cout << "3數總和為:" << result << endl;

}
