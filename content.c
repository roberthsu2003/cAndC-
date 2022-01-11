main.cpp

#include <iostream>
#include "data.h"
#include "time.h"


using namespace std;

int main() {
	srandom(time(NULL));
	Student students[50];
	for(int i=0; i<50; i++){
		students[i].name = "stu" + to_string(i+1);
		students[i].chinese = createScore(60,100);
		students[i].english = createScore(50, 100);
		students[i].math = createScore(55,100);
	}

	for(int i=0; i< 50; i++){
		cout << students[i].name << endl;
		cout << students[i].chinese << endl;
		cout << students[i].english << endl;
		cout << students[i].math << endl;
		cout << "總分是:" << sum( students[i]) << endl;
		cout << "平均是:" << average(students[i]) << endl;
		cout << "===================" << endl;
	}
} 



data.h

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

int createScore(int min, int max){
	return random() % (max-min+1) + min;
}

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	return sum(s) / 3.0;
}
