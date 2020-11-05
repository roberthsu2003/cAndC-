#include <iostream>
using namespace std;
//自訂一個結構
struct student{
	int id;
	const char *name;
	int chinese,math,english;
};

int main() {
	//建立結構變數,同時設定成員值
	struct student david = {99001, "robert", 75, 86, 90};	

	//取出值
	cout << david.id << endl;
	cout << david.name << endl;
	cout << david.chinese << endl;
	cout << david.english << endl;
	cout << david.math << endl;
}
