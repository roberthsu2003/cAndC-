#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
	//c++ 字串
	string str = "DevC++";
	//c語言的字元陣列
	char str1[] = {'D', 'e', 'v', 'C', '+', '+', '\0'};
	char str2[] = "DevC++";
	printf("%s\n",str1);
	cout << str << endl;
	cout << str1 << endl;
	printf("%s\n",str2);
}
