#include <iostream>
using namespace std;

int main() {
	double PI = 3.1415915987;	
	int radius;
	double area;

	cout << "請輸入半徑:";
	cin >> radius;
	area = radius * radius * PI;
	cout << "圓面積:" << area << endl;
	return 0;
}
