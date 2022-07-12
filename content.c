#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "請輸入出生民國年份:";
	cin >> year;
	int westernYear = year + 1911;
	int age = 2022 - westernYear;
	cout << "西元年份:" << westernYear << "今年" << age << "歲" << endl;
}
