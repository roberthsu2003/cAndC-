#include <iostream>
using namespace std;
int main() {
	const double PI = 3.141592653;
	float radius;
	cout << "請輸入半徑(公分):";
	cin >> radius;

	cout << "圓周長為:" << 2 * PI * radius << endl;
	cout << "圓面積是:" << PI * radius * radius << endl;
}
