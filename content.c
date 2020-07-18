#include <iostream>
using namespace std;

struct student{
	int id;
	const char *name;
	int chinese, math, english;
};

int main() {
	struct student david;
	david.id = 99001;
	david.name = "David";
	david.math = 87;
	david.chinese = 94;
	david.english = 92;

	cout << "david的id " << david.id << endl;
	cout << "david的name " << david.name << endl;
	cout << "david的chinese " << david.chinese << endl;
	cout << "david的english " << david.english << endl;
	cout << "david的math " << david.math << endl;
	cout << "============================\n\n";
	
	struct student robert = {99002, "robert", 87, 86, 93};

	cout << "robert的id " << robert.id << endl;
	cout << "robert的name " << robert.name << endl;
	cout << "robert的chinese " << robert.chinese << endl;
	cout << "robert的english " << robert.english << endl;
	cout << "rober的math " << robert.math << endl;
}
