#include <iostream>
using namespace std;
typedef struct student{
	string name;
	int scores[5];
}Student;

int main() {
	Student stus[] = {{"robert",{78, 98, 78, 63, 83}},{"david",{78, 98, 58, 73, 73}},{"alice", {68, 98, 74, 63, 82}}};
	int stuCount = sizeof(stus) / sizeof(stus[0]);
	cout << "stus陣列的元素數量是" << stuCount << endl;

	for(int i=0; i< stuCount; i+=1){
		Student student = stus[i];
		cout << "學生姓名" << student.name << endl;
		int sum = 0;
		for(int j=0; j<5; j++){
			cout << student.scores[j] << " ";
			sum += student.scores[j];
		}
		cout << endl;
		cout << "總分是" << sum << endl;
		cout << "平均是" << sum/5.0 << endl;
		cout << "==================" << endl;
	}
	return 0;
}
