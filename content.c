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
	for(int i=1; i<=50; i++){
		Student stu(i);
		cout << "學生姓名:" << stu.name << endl;
		cout << "學號:" << stu.id << endl;
		cout << "國文:" << stu.chinese << endl;
		cout << "英文:" << stu.english << endl;
		cout << "數學:" << stu.math << endl;
		cout << "總分:" << stu.sum() << endl;
		printf("平均:%.2f\n",stu.average());
		cout << "===================" << endl;
	}	
}
