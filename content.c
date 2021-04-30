#include <iostream>
using namespace std;
int main() {
	char str1[] = "two";
	cout << str1 << endl;
	//陣列變數無法換新的內容
	//str1 = "three";

	const char *str2 = "two";
	cout << str2 << endl;
	str2 = "three";
	cout << str2 << endl;
	//指標變數可以更換的內容
	//str1 = "three";

	string str3 = "two";
	str3 = "thress";
	cout << str3 << endl;
}
