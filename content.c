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
		cout << "學生姓名:" << students[i].name << endl;
		cout << "國文分數:" << students[i].chinese << endl;
		cout << "數學分數:" << students[i].math << endl;
		cout << "英文分數:" << students[i].english << endl;
		cout << "總分:" << students[i].sum() << endl;
		cout << "平均:" << students[i].average() << endl;
		cout << "=====================" << endl;
	}
	return 0;
}
