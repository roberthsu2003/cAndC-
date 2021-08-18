#include <iostream>

using namespace std;

int main() {
	short s1;
	int i1;
	long long int lli;
	//string c++ 才有的型別
	string name = "robert hsu";
	cout << "short=" << sizeof(s1) << endl;
	cout << "int=" << sizeof(i1) << endl;
	cout << "long long int=" << sizeof(lli) << endl;
	cout << "string=" << sizeof(name) << endl;
	return 0;
}
