#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int scores[5];
}Student;

int main() {
	Student stu[3] = {{"robert",{78, 98, 78, 78, 83}},{"david",{78, 98, 78, 63, 83}},{"alis",{69, 98, 78, 63, 83}}};

	for(int i=0; i<3; i++){
		int sum = 0;
		for(int j=0; j<5; j++){
			sum += stu[i].scores[j];
		}
		cout << "學生:" << stu[i].name << "總分數是" << sum << endl;
	}
}
