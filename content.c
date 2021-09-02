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
	return 0;
}
