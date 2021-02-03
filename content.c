#include <iostream>
using namespace std;

int main() {
	//c 語言的字元陣列
	char str[] = {'D','e','v', 'C', '+', '+', '\0'};
	cout << "str字元陣列:" << str << endl;
	char str1[] = "DevC++";
	cout << "str1字元陣列:" << str1 << endl;
	const char *str2 = "DevC++";
	cout << "str2字元陣列:" << str2 << endl;

	//c++ 語言string
	string str3 = "DevC++";
	cout << "str3字串:" << str3 << endl;

}
