#include <iostream>
#include <cmath>
using namespace std;

//建立一個function,輸入弳度，傳出sin(弳度)
double display_sine(double radian){
	//return sin(radian)
	return sin(radian);
}

double degree_to_radian(int degree){
	double pi = 3.141592653;
	return pi / 180 * degree;
}

int main() {
	int degree;
  	cout << "請輸入degree:";
	cin >> degree;
	double radian = degree_to_radian(degree);
	cout << "角度" << degree << ",弳度是" << radian << endl;
	cout << "角度" << degree << "sin(弳度)=" << display_sine(radian) << endl;
	return 0;
}
