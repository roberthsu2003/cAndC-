#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int score;
}Student;

int main() {
	//建立3位學生,放在陣列內
	Student stus[] = {{"robert", 94},{"david", 91},{"alice", 94},{"jenny", 68}};
	
	int stuCount = sizeof(stus) / sizeof(stus[0]);

	for(int i=0; i<stuCount; i++){
		Student stu=stus[i];
		cout << "第" << i+1 << "位學生是" << stu.name << "分數是" << stu.score << endl;
	}

}
