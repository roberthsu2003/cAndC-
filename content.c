#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	string id;
	int chinese;
	int english;
	int math;

	//自訂的建構式
	Student(string n,string i,int ch, int en, int ma){
		name = n;
		id = i;
		chinese = ch;
		english = en;
		math = ma;
	}
	
	int sum(){
		return chinese + english + math;
	}

	float average(){
		return sum() / 3.0;
	}
};

int main() {
	Student stu1("stu1", "A100001", 87, 97, 67);
	cout << stu1.name << endl;
	cout << "總分:" << stu1.sum() << endl;
	cout << "平均:" << stu1.average() << endl;
} 
