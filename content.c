#include <iostream>
using namespace std;

int main() {
	int array[] = {1, 2, 3};
	cout << array[2] << endl;
	cout << *(array+2) << endl;

	//字元陣列和陣列變數
	char name[] = "robert";
	cout << name[2] << endl;
	cout << *(name+2) << endl;

	//字元陣列和指標變數
	const char *sex = "man";
	cout << sex[2] << endl;
	cout << *(sex+2) << endl;

	//以後要建立c語言的字串(字元陣列)
	//const char *變數名稱
	const char *teacherName = "myTeacher";
	cout << teacherName << endl;

	//使用c++語言的字串
	string bossName = "myBoss";
	cout << bossName << endl;
	

}
