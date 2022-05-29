#include <iostream>
#include <time.h>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int math;
	int english;
}Student;

void add_student_info(Student *s,int num){
	srand(time(NULL));
	for(int i=0; i<num; i++){
		s[i].name= "stu" + to_string(i+1);
		s[i].chinese = rand() % (100-60+1) + 60;
		s[i].english = rand() % (100-60+1) + 60;
		s[i].math = rand() % (100-60+1) + 60;
	}
}

void print_students(Student *s,int num){
	cout << "姓名" << "\t";
	cout << "國文" << "\t";
	cout << "英文" << "\t";
	cout << "數學" << endl;

	for(int i=0; i<num; i++){
		Student stu = s[i];
		cout << stu.name << "\t";
		cout << stu.chinese << "\t\t";
		cout << stu.english << "\t\t";
		cout << stu.math << "\t";
		cout << endl;
	}
	
}

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
