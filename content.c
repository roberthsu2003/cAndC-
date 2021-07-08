#include <iostream>
using namespace std;

int main() {
	char str[] = {'D', 'e', 'v', 'C', '+', '+','\0'};
	cout << str << endl;
	const char *name = str;
	cout << name << endl;
	name = "robert";
	cout << name << endl;

	//c語言的字串
	const char* myName = "Hello! C++";
	cout << myName << endl;
	myName = "Hello! C";
	cout << myName << endl;
	
	//c++語言的字串
	string yourName = "Learning C++";
	cout << yourName << endl;
}
