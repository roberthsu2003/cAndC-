main.cpp

#include <iostream>
#include "tools.h"
using namespace std;

int main() {
	//建立陣列
	int num;
	cout << "請輸入學生數量:";
	cin >> num;
	//建立學生陣列
	Student students[num];

	//將陣列內所有的結構給值
	add_student_info(students,num);
	
	//輸出學生的資料
	print_students(students, num);
}



tools.h

#include <iostream>
#include <time.h>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int math;
	int english;
	int sum;
	float average;
}Student;

void add_student_info(Student *s,int num){
	srand(time(NULL));
	for(int i=0; i<num; i++){
		s[i].name= "stu" + to_string(i+1);
		s[i].chinese = rand() % (100-60+1) + 60;
		s[i].english = rand() % (100-60+1) + 60;
		s[i].math = rand() % (100-60+1) + 60;
		s[i].sum = s[i].chinese + s[i].english + s[i].math;
		s[i].average = s[i].sum / 3.0;
	}
}

void print_students(Student *s,int num){
	cout << "姓名" << "\t";
	cout << "國文" << "\t";
	cout << "英文" << "\t";	
	cout << "數學" << "\t";
	cout << "總分" << "\t";
	cout << "平均" << "\t";
	cout << "名次" << endl;
	
	for(int i=0; i<num; i++){
		Student stu = s[i];
		cout << stu.name << "\t";
		cout << stu.chinese << "\t\t";
		cout << stu.english << "\t\t";
		cout << stu.math << "\t\t";
		cout << stu.sum << "\t\t";
		printf("%.2f\t\t", stu.average);
		cout << i+1 << endl;
		
	}
	
}
