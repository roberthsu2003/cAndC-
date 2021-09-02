#include <iostream>
using namespace std;

//定義一個結構
typedef struct student{
	int id;
	string name;
	int chinese, math, english;
}Student;


int main() {
	//建立一個結構變數
	Student david;
	david.id = 99001;
	david.name = "David";
	david.chinese = 75;
	david.english = 98;
	david.math = 87;

	cout << "學生id" << david.id << endl;
	cout << "學生姓名" << david.name << endl;
	cout << "國文" << david.chinese << endl;
	cout << "英文" << david.english << endl;
	cout << "數學" << david.math << endl;

	cout << "=======================" << endl;
	Student robert;
	robert.id = 99002;
	robert.name = "Robert";
	robert.chinese = 76;
	robert.english = 93;
	robert.math = 92;

	cout << "學生id" << robert.id << endl;
	cout << "學生姓名" << robert.name << endl;
	cout << "國文" << robert.chinese << endl;
	cout << "英文" << robert.english << endl;
	cout << "數學" << robert.math << endl;
	return 0;
}
