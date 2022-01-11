#include <iostream>
using namespace std;

typedef struct student{
	string id;
	string name;
	int chinese,math,english;
}Student;

int main() {
	Student david;
	david.id = "99001";
	david.name = "David";
	david.chinese = 85;
	david.math = 86;
	david.english = 90;

	Student robert = {"99002","Robert",76, 95, 73};
	cout << "name:" << robert.name << endl;
	cout << "id:" << robert.id << endl;
	cout << "chinese:" << robert.chinese << endl;
	cout << "math:" << robert.math << endl;
	cout << "english:" << robert.english << endl;
} 
