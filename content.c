#include <iostream>
using namespace std;
//自訂一個結構
struct student{
	int id;
	const char *name;
	int chinese,math,english;
};

int main() {
	//建立結構變數
	struct student david;

	//設定成員的值
	david.id = 99001;
	david.name = "robert";
	david.chinese = 75;
	david.english = 86;
	david.math = 90;

	//取出值
	cout << david.id << endl;
	cout << david.name << endl;
	cout << david.chinese << endl;
	cout << david.english << endl;
	cout << david.math << endl;
}
