#include <iostream>
//讓使用者輸入梯形的上底、下底及高，程式會計算梯形的面積(上底加下底乘以高除以2)

using namespace std;

int main() {
	int top, bottom , height;
	float area;
	cout << "請輸入梯形的上底(公分):";
	cin >> top;

	cout << "請輸入梯形的下底(公分):";
	cin >> bottom;

	cout << "請輸入梯形的高(公分):";
	cin >> height;

	area = (top + bottom) * height / 2.0;

	cout << "梯形的面積:" << area << "平方公分\n";
	
}
