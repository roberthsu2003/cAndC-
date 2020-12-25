#include <iostream>
using namespace std;

struct student{
	string id;
	string name;
	int chinese, math, english;
};

int main() {
	/*
	struct student david;
	david.id = "A10001";
	david.name = "david";
	david.chinese = 78;
	david.math = 98;
	david.english = 65;
	*/

	struct student david = {"A10001", "david", 78, 98, 65};

	cout << "學號:" << david.id << endl;
	cout << "姓名:" << david.name << endl;
	cout << "國文:" << david.chinese << endl;
	cout << "數學:" << david.math << endl;
	cout << "英文:" << david.english << endl;
}
