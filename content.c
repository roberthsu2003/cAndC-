#include <iostream>
using namespace std;
//定義結構
struct student{
	int id;
	const char *name;
	int chinese,math,english;
};

int main() {
	//建立結構變數
	struct student david = {990011, "robert", 75, 86, 90};

	//結構變數給值
	/*
	david.id = 990011;
	david.name = "robert";
	david.chinese = 75;
	david.math = 86;
	david.english = 90;
	*/

	

	//取出結構變數的值
	cout << "id=" << david.id << endl;
	cout << "name=" << david.name << endl;
	cout << "chinese=" << david.chinese << endl;
	cout << "math=" << david.math << endl;
	cout << "english=" << david.english << endl;

}
