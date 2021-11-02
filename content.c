#include <iostream>
using namespace std;

class Student{
	public:
		//建構式
		Student();
		Student(string n);
		static void begin(){
			srandom(time(NULL));
		}
		string name;
		//實體欄位
		int chinese;
		int english;
		int math;
		//實體方罄
		int sum();
		float average();
};
//建構式
Student::Student(){

}
//建構式
Student::Student(string n){
	int max = 100;
	int min = 60;	
	name = n;
	chinese = random() % (max-min+1) + min;
	english = random() % (max-min+1) + min;
	math = random() % (max-min+1) + min;
}

int Student::sum(){
	return chinese + english + math;
}
float Student::average(){
	return sum() / 3.0;
}


int main() {
	int nums = 50;
	Student::begin();
	Student stu1 = Student();
	Student students[nums];
	for(int i=0; i<nums; i++){
		students[i] = Student("stu"+to_string(i+1));
	}

	cout << "學生姓名\t國文\t數學\t英文\t總分\t平均" << endl;
	for(int i=0; i<nums; i++){
		Student s = students[i];
		cout << s.name << "\t\t" << s.chinese << "\t\t" << s.math << "\t\t" << s.english << "\t\t" << s.sum() << "\t\t";
		printf("%.2f\n",s.average()); 
	}
	return 0;
} 
