#include <iostream>
#include "tool.h"
using namespace std;

int main() {
	double us, nt;
	cout << "請輸入您有多少美金:";
	cin >> us;
	nt = us * RATE;
	cout << "您有" << nt << "台幣" << endl;
}
tool.h
#define RATE 32.78
//定義一個結構
typedef struct student{
	const char *name;
	int chinese, math, english;
} student;
