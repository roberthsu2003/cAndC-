#include <iostream>
#include "student.h"
using namespace std;

void sortedStudents(Student *s,int nums){
	Student temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (s[i].sum() < s[j].sum()){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

}

int main() {
	int nums;
	Student::begin();
	cout << "請輸入學生人數:";
	cin >> nums;
	Student students[nums];
	for(int i=0; i<nums; i+=1){
		students[i] = Student("stu"+to_string(i+1));		
	}

	//依總分排序
	sortedStudents(students,nums);

	cout << "學生姓名\t國文\t數學\t英文\t總分\t平均\t名次" << endl; 

	for(int i=0; i<nums; i+=1){
		Student s = students[i];
		cout << s.name << "\t\t" << s.chinese << "\t\t" << s.math << "\t\t" << s.english << "\t\t" << s.sum() << "\t\t" << s.average() << "\t\t" << i+1 << endl;
	}
	return 0;
}
