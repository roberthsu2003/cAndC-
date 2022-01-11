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
		students[i].chinese = random() % (100-60+1) + 60;
		students[i].english = random() % (100-60+1) + 60;
		students[i].math = random() % (100-60+1) + 60;
	}

	for(int i=0; i< 50; i++){
		cout << students[i].name << endl;
		cout << students[i].chinese << endl;
		cout << students[i].english << endl;
		cout << students[i].math << endl;
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
