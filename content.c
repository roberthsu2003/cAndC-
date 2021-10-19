#include <iostream>
using namespace std;
int main() {
	/*
	char name[] = {'R','o','b','e','r','t','\0'};
	cout << "name:" << name << endl;
	*/

	/*
	char name[] = "Robert";
	cout << "name:" << name << endl;
	//name = "davie";
	*/

	//c 語言的字串
	const char *name = "Robert";
	cout << "name:" << name << endl;
	name = "David";
	cout << "name:" << name << endl; 
	
	return 0;
}
