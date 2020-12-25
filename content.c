#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	//c++ 的字串輸入
	/*
	string name;
	cout << "請輸入姓名:";
	cin >> name;
	cout << name << endl;
	*/

	//c語言的字串輸入
	char p1[50];
	cout << "請輸入字串:";
	fgets(p1, sizeof(p1), stdin);
	cout << p1 << endl;
	return 0;
}
