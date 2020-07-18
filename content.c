#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int score;
}student;

int main() {
	student stus[3] = {{"robert", 93},{"david", 91},{"alice", 94}};
	int stuCount = sizeof(stus) / sizeof(stus[0]);

	for(int i=0; i<stuCount; i++){
		cout << "第" << i+1 << "位學生是" << stus[i].name << ",分數是" << stus[i].score << endl;
	}
	cout << "=============================\n\n";

	int total=0;
	for(int i=0; i<stuCount; i++){
		total += stus[i].score;
	}

	cout << "學生總分是:" << total << endl;
	cout << "學生平均是:" << total/3.0 << endl;
}
