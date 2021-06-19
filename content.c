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
	int studentNum = 10;
	student oneClass[studentNum];
	for(int i=0;i<studentNum;i++){
		struct student stu;	
		stu.name = "Stu" + to_string(i+1);
		stu.id = "A100" + to_string(i+1);
		stu.chinese = (random() % 51) + 50;
		stu.english = (random() % 51) + 50;
		stu.math = (random() % 51) + 50;

		oneClass[i] = stu;
	}
	
	
	/*
	student david = {"David","A1001",78,98,87};
	*/
	for(int i=0;i<studentNum;i++){
		cout << "學生姓名:" << oneClass[i].name << endl;
		cout << "學生學號:" << oneClass[i].id << endl;
		cout << "國文:" << oneClass[i].chinese << endl;
		cout << "英文:" << oneClass[i].english << endl;
		cout << "數學:" << oneClass[i].math << endl;
		cout << "===========================\n";
	}
}
