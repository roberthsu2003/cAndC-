#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
	//c語言的字元陣列
	char name[] = "robert";
	char age[] = "18";
	//c++字串
	std::string myName = "Jenny";
	std::string myAge = "20";
	//c語言的輸出
	printf("Hello C++ %s age=%s\n",name,age);

	//c++語言的輸出
	std::cout << "Hello C++ " << myName << " age=" << myAge << "\n";

	std::cout << "Hello C++ " << name << " age=" << age << "\n";

}
