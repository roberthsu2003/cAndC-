#include <iostream>
#include "student.h"
using namespace std;

int main() {
	int nums;
	Student::begin();
	cout << "請輸入學生人數:";
	cin >> nums;
	Student students[nums];
	for(int i=0; i<nums; i+=1){
		students[i] = Student("stu"+to_string(i+1));		
	}

	cout << "學生姓名\t國文\t數學\t英文\t總分\t平均" << endl; 

	for(int i=0; i<nums; i+=1){
		Student s = students[i];
		cout << s.name << "\t\t" << s.chinese << "\t\t" << s.math << "\t\t" << s.english << "\t\t" << s.sum() << "\t\t" << s.average() << endl;
	}
	return 0;
}
