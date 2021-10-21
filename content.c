#include <iostream>
using namespace std;

struct student{
	int id;
	string name;
	int chinese, english, math;
};

int main() {
	struct student david = {99001, "David", 75, 86, 90};
	
	cout << "學生id:" << david.id << endl;
	cout << "學生name:" << david.name << endl;
	cout << "學生chinese:" << david.chinese << endl;
	cout << "學生math:" << david.math << endl;
	cout << "學生english:" << david.english << endl;
	}
