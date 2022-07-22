#include <iostream>
using namespace std;

int main() {
	const char* cName = "cRobert";
	cout << cName << endl;

	string name = "c++Robert";
	cout << name << endl;

	cName = "cJenny_Hsu";
	cout << cName << endl;

	int id = 10;
	cout << name + to_string(id) << endl;
}
