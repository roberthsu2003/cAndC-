#include <iostream>
using namespace std;

int main() {
	string name,sex;
	int year;
	
	cout << "請輸入您的姓名:";
	cin >> name;
	cout << "請輸入您的性別:";
	cin >> sex;
	cout << "請輸入您的出生(民國年):";
	cin >> year;

	cout << endl;
	cout << "您的姓名是" << name << endl;
	cout << "您的性別是" << sex << endl;
	cout << "您的出生(西元):" << year + 1911 << endl;
	cout << "您" << 2022 - (year + 1911)<< "歲" << endl;
}
