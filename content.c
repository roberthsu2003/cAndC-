main.cpp
#include <iostream>
#include "tool.h"

using namespace std;



int main() {
	

	student stus[] = {
		{"david",80,68,98},
		{"robert",80,79,98},
		{"john",80,64,98}
	};

	int num = sizeof(stus) / sizeof(stus[0]);
	
	for(int i=0; i<num; i++){
		int sum = stus[i].chinese + stus[i].english + stus[i].math;
		cout << "name:" << stus[i].name << endl;
		cout << "chinese:" << stus[i].chinese << endl;
		cout << "english:" << stus[i].english << endl;
		cout << "math:" << stus[i].math << endl;
		cout << "總分:" << sum << endl;
		cout << "平均:" <<  (float)sum / num << endl;
		cout << "===============================" << endl;
	}

}

tool.h
//定義一個結構
typedef struct student{
	const char *name;
	int chinese, math, english;
} student;
