#include <iostream>
using namespace std;

int main() {
	//c++ 字串
	string str1 = "DevC++";
	cout << "str1:" << str1 << endl;
	char str2[] = {'D', 'e', 'v', 'C', '+', '+', '\0'};
	cout << "str2:" << str2 << endl;
	char str3[] = "DevC++";
	printf("str3:%s\n",str3);
	str3[0] = 'R';
	printf("str3:%s\n",str3);
	printf("陣列變數裏面儲存的是%x\n",str3);
	printf("第一個元素的記憶體位址%x\n", &str3[0]);
	char *str4 = "DevC++";
	printf("str4:%s\n",str4);
	str4 = "Hello!World!";
	printf("str4:%s\n",str4);
	str4 = "Hello!C++!";
	printf("str4:%s\n",str4);

	//真正設定c語言字串
	const char* name = "徐國堂";
	const char* sex = "男";
	printf("name=%s\n", name);
	printf("sex=%s\n", sex);
	name = "robert Hsu";
	sex = "man";
	printf("name=%s\n", name);
	printf("sex=%s\n", sex);
}
