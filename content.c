#include <iostream>

using namespace std;
//自訂的function
double circle_area(int radius){
	return  3.141592653 * radius * radius;
}

int main() {
	double my_area = circle_area(10);
	cout << "半徑10的圓面積是" << my_area << endl;
}
