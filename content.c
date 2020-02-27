#include <iostream>
using namespace std;

int main() {
	float top, bottom, height, area;
	cout << "請輸入梯形的上底(公分):";
	cin >> top;

	cout << "請輸入梯形的下底(公分):";
	cin >> bottom;

	cout <<	"請輸入梯形的高(公分):";
	cin >> height;

	area = (top + bottom) * height / 2;
	cout << "梯形的面積:" << area << "平方公分\n";
}
