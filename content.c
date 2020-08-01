#include <iostream>
using namespace std;

int main() {
	float PI = 3.14159;
	int radius = 10;
	cout << "圓面積=" << PI * radius * radius << endl; //自動轉換
	cout << "圓面積=" << (int)(PI * radius * radius) << endl;//手動轉換
	cout << "圓面積=" << (int)PI * radius * radius << endl;//手動轉換
	cout << PI << endl;
	cout << radius << endl;
}
