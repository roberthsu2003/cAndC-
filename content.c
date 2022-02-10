#include <iostream>
using namespace std;

int main() {
	int years;
	cout << "出生民國年份:";
	cin >> years;
	int westernYear = years + 1911;
	int age = 2022 - westernYear;
	cout << "對應西元年份是:" << westernYear << endl;
	cout << "今年" << age << "歲" << endl;
	return 0;
}
