#include <iostream>
using namespace std;

double degree_to_radiam(int degree){
	double pi = 3.141592653;
	return pi / 180 * degree;
}

int main() {
	int degree;
  	cout << "請輸入degree:";
	cin >> degree;
	double radian = degree_to_radiam(degree);
	cout << "角度" << degree << ",弳度是" << radian << endl;

}
