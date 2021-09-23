#include <iostream>
using namespace std;

int main() {
	//c++ 字串型別
	string str1 = "這是c++的字串";

	//c 字元陣列
	const char* str2 = "這是c的字元陣列";

	//使用cout輸出
	cout << "cout輸出str1:" << str1 << endl;
	cout << "cout輸出str2:" << str2 << endl;

	//使用printf(),只可以輸出字元陣列
	printf("printf()輸出str2:%s\n",str2);
	return 0;
}
