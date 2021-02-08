#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Student{
	public:
		string id;
		string name;
		int chinese;
		int english;
		int math;

		Student(string i, string n, int chin, int eng, int ma){
			id = i;
			name = n;
			chinese = chin;
			english = eng;
			math = ma;
		}

		Student(int i){
			srand(time(NULL) + i);
			id = "A100000" + to_string(i);
			name = "student" + to_string(i);
			chinese = random() %  51 + 50;
			english = random() %  51 + 50;
			math = random() %  51 + 50;
		}
		
		int sum(){
			return chinese + english + math;
		}

		float average(){
			return sum() / 3.0;
		}
};

int main() {
	Student stu1(1);
	cout << "學生姓名:" << stu1.name << endl;
	cout << "學號:" << stu1.id << endl;
	cout << "國文:" << stu1.chinese << endl;
	cout << "英文:" << stu1.english << endl;
	cout << "數學:" << stu1.math << endl;
	cout << "總分:" << stu1.sum() << endl;
	cout << "平均:" << stu1.average() << endl;

	cout << "===================" << endl;

	Student stu2(2);
	cout << "學生姓名:" << stu2.name << endl;
	cout << "學號:" << stu2.id << endl;
	cout << "國文:" << stu2.chinese << endl;
	cout << "英文:" << stu2.english << endl;
	cout << "數學:" << stu2.math << endl;
	cout << "總分:" << stu2.sum() << endl;
	cout << "平均:" << stu2.average() << endl;
}
