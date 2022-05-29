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



int main() {
	//建立陣列
	int num;
	cout << "請輸入學生數量:";
	cin >> num;
	Student students[num];

	//將陣列內所有的結構給值
	add_student_info(students,num);
	
	//輸出第一位學生的資料
	cout << students[0].name << endl;
	cout << students[0].chinese << endl;
	cout << students[0].english << endl;
	cout << students[0].math << endl;
}
