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
	david.name = "rober";
	david.chinese = 75;
	david.math = 86;
	david.english = 90;

	cout << "id=" << david.id << endl;
	cout << "name=" << david.name << endl;
	cout << "chinese=" << david.chinese << endl;
	cout << "math=" << david.math << endl;
	cout << "english=" << david.math << endl;
}
