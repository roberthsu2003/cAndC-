#include <iostream>
using namespace std;

int main() {
	double PI = 3.1415915987;
	int radius = 9;
	int area;
	//數學運算時，會自動轉換型別
	//如果使用=,會自動轉換型別
	area = PI * radius * radius;
	cout << "圓面積=" << area << endl;
	printf("圓面積=%d\n",area);
	return 0;
}
