#include <iostream>
using namespace std;
//定義結構
typedef struct student{
	int id;
	const char *name;
	int chinese,math,english;
} Student;

int main() {
	//建立結構變數
	Student david = {990011, "robert", 75, 86, 90};

	
	//取出結構變數的值
	cout << "id=" << david.id << endl;
	cout << "name=" << david.name << endl;
	cout << "chinese=" << david.chinese << endl;
	cout << "math=" << david.math << endl;
	cout << "english=" << david.english << endl;

}
