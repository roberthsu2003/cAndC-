#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	//c語言的字元陣列
	char name[] = "robert";
	char age[] = "18";
	//c++字串
	string myName = "Jenny";
	string myAge = "20";
	//c語言的輸出
	printf("Hello C++ %s age=%s\n",name,age);

	//c++語言的輸出
	cout << "Hello C++ " << myName << " age=" << myAge << "\n";

	cout << "Hello C++ " << name << " age=" << age << "\n";

}
