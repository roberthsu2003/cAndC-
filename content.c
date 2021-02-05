#include <iostream>
using namespace std;

struct student{
	string name;
	float chinese;
	float english;
	float math;
};

int main() {
	struct student john;
	john.name = "張三";
	john.chinese = 78.0;
	john.english = 95;
	john.math = 84;

	struct student alice;
	alice.name = "李四";
	alice.chinese = 81;
	alice.english = 83;
	alice.math = 85;

	cout << john.name << "總分是:" << john.chinese + john.english + john.math <<",平均是" << (john.chinese + john.english + john.math) / 3 << endl;

	cout << alice.name << "總分是:" << alice.chinese + alice.english + alice.math <<",平均是" << (alice.chinese + alice.english + alice.math) / 3 << endl;
}
