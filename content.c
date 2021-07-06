#include <iostream>
#include "data.h"

using namespace std;



int main() {
	Stu students[50];
	students[0].name = "robert";
	students[0].id = "A1234567";
	students[0].chinese = 89;
	students[0].english = 90;
	students[0].math = 76;


}

data.h
#include <iostream>
using namespace std;

typedef struct Student{
	string name;
	string id;
	int chinese;
	int english;
	int math;
}Stu;
