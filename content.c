#include <iostream>
using namespace std;
//數值型別自動轉換
int main() {
	double PI = 3.1415962;
	int radius;
	int area;
	cout << "請輸入半徑:";
	cin >> radius;
	area = PI * radius * radius;
	cout << "圓面積=" << area << endl;
	printf("圓面積=%.2f\n",PI * radius * radius);
}
