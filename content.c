#include <iostream>
using namespace std;

int main() {
	double PI = 3.14159;
	int radius;
	cout << "請輸入圓半徑:";
	cin >> radius;
	cout << "圓面積是:" << radius*radius*PI << endl;
	cout << "圓周長是:" << 2*radius*PI << endl;
}
