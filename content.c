#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//建立student結構
typedef struct student{
	string name,id;
	int chinese,english,math;	
} student;

int main() {
	srandom(time(NULL));
	
	struct student david;
	david.name = "Davie";
	david.id = "A1001";
	david.chinese = (random() % 51) + 50;
	david.english = (random() % 51) + 50;
	david.math = (random() % 51) + 50;
	
	/*
	student david = {"David","A1001",78,98,87};
	*/
	cout << "學生姓名:" << david.name << endl;
	cout << "學生學號:" << david.id << endl;
	cout << "國文:" << david.chinese << endl;
	cout << "英文:" << david.english << endl;
	cout << "數學:" << david.math << endl;
}
