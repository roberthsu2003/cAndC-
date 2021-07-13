#include <iostream>
#include "student.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

using namespace std;

void sorted(Student s[],int length){
	Student temp;
	for(int i=0; i<length-1; i++){
		for(int j=i+1; j<length; j++){
			if (sum(s[i]) < sum(s[j])){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}


int main() {
	Student students[50];
	//建立亂數種子
	srand(time(NULL));
	for(int i=0; i<50; i++){
		students[i] = createStudent(i+1);
	}

	sorted(students,50);
	cout << "姓名\t學號\t國文\t英文\t數學\t總分\t平均\t名次" << endl;

	for(int i=0; i<50; i++){
		Student s = students[i];
		cout << s.name << "\t" << s.id << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << sum(s);
		printf("\t\t%.2f",average(s));
		cout << "\t\t" << i + 1 << endl;
	}

	
}
