#include <iostream>

using namespace std;

int main() {
	//c++的字串型別
	string str1 = "DevC++";
	cout << "str1=" << str1 << endl;
	str1 = "Java";
	cout << "str1=" << str1 << endl;

	//c語言的字元陣列
	//char str2[] = {'D','e','v','C','+','+','\0'};
	char str2[] = "DevC++";
	//使用2種方法都可以輸出
	cout << "str2:" << str2 << endl;
	printf("str2:%s\n", str2);
	//字元陣列無法改值
	//str2 = "java";

	//字義c語言的字串，請使用const char* 變數名稱
	const char* str3 = "DevC++";
	cout << "str3:" << str3 << endl;
	printf("str3:%s\n", str3);
	str3 = "Java";
	cout << "str3:" << str3 << endl;
	printf("str3:%s\n", str3);

}
