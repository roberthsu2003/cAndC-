#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int math;
	int english;
}Student;

void add_student_info(Student *s,int num){
	for(int i=0; i<num; i++){
		s[i].name= "robert";
		s[i].chinese = 89;
		s[i].english = 90;
		s[i].math = 65;
	}
}



int main() {
	//建立陣列
	Student students[50];

	//將陣列內所有的結構給值
	add_student_info(students,50);
	
	//輸出第一位學生的資料
	cout << students[0].name << endl;
	cout << students[0].chinese << endl;
	cout << students[0].english << endl;
	cout << students[0].math << endl;
}
