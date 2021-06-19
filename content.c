#include <iostream>
using namespace std;
//建立student結構
struct student{
	string name,id;
	int chinese,english,math;	
};

int main() {
	/*
	struct student david;
	david.name = "Davie";
	david.id = "A1001";
	david.chinese = 78;
	david.english = 98;
	david.math = 87;
	*/
	struct student david = {"David","A1001",78,98,87};
	cout << "學生姓名:" << david.name << endl;
	cout << "學生學號:" << david.id << endl;
	cout << "國文:" << david.chinese << endl;
	cout << "英文:" << david.english << endl;
	cout << "數學:" << david.math << endl;
}
