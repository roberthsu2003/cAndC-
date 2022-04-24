#include <iostream>
using namespace std;

int main() {
	double PI = 3.1415915987;
	int radius;
	cout << "請輸入半徑";
	cin >> radius;
	cout << "圓面積=" << PI * radius * radius << endl;
	cout << "圓面積=" << int(PI * radius * radius) << endl;
	
}
