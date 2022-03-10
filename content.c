#include <iostream>
#include <cmath>
using namespace std;
float circle_area(float radius);
float circle_area(int radius);

int main() {
	int radius;
	float area;
	cout << "請輸內圓半徑:";
	cin >> radius;
	area = circle_area(radius);
	cout << "圓面積是:" << area << endl;
}

float circle_area(float radius){
	return M_PI * pow(radius,2); //內建的function
}

float circle_area(int radius){
	return M_PI * pow(radius,2); //內建的function
}
