#include <iostream>
#include <time.h>

using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

int main() {
	srandom(time(NULL));
	int min = 50;
	int max = 100;
	Student student[3];
	for(int i=0; i<3; i++){
		student[i].name = "stu" + to_string(i+1);
		student[i].chinese = random() % (max-min+1)+min;
		student[i].english = random() % (max-min+1)+min;
		student[i].math = random() % (max-min+1)+min;
	}
	
	

	for(int i=0; i<3; i++){
		cout << "name:" << student[i].name << endl;
		cout << "chinese:" << student[i].chinese << endl;
		cout << "english:" << student[i].english << endl;
		cout << "math:" << student[i].math << endl;
		cout << "===============" << endl;
	}
}
