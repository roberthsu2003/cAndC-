#include <iostream>

using namespace std;
//自訂的function
double circle_area(int radius){
	return  3.141592653 * radius * radius;
}

int main() {
	int radius;
	cout << "請輸入半徑:";
	cin >> radius;
	double my_area = circle_area(radius);
	cout << "半徑" << radius << "的圓面積是" << my_area << endl;
}
