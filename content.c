#include <iostream>
#include "tools.h"
#include <iostream>
#include "tools.h"
using namespace std;


int main() {
	student students[2] = {{"張三", 57, 97, 76},{"李四", 87, 65,82}};
	cout << "姓名\t國文\t英文\t數學\t" << endl;
	
	for(int i=0;i<2;i++){
		student s = students[i];
		cout << s.name << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << endl;
	}
}

tools

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	float chinese;
	float english;
	float math;
} student;

float sum(student s){
	return s.chinese + s.english + s.math;
}

float average(student s){
	float mySum = sum(s);
	return mySum / 3.0;
}
