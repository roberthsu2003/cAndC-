#include <iostream>
using namespace std;

int main() {
	int year;
	int westernYear;
	
	cout << "請輸入出生民國年份:";
	cin >> year;
	westernYear = 1911 + year;
	cout << "您的西元年份是" << westernYear << endl;
}
