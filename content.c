#include <iostream>
using namespace std;

class Student {
	public:	
	  string name;
	  int chinese;
	  int english;
	  int math;	

		
};

void print(Student& stu){
	cout << stu.name << endl;
}

int main() {
  int nums;
  cout << "請輸入學生人數:";
  cin >> nums;
	Student students[nums];
	
	for(int i=0; i<nums; i++){
		Student s = students[i];
		s.name = "學生" + to_string(i+1);
		print(s);
	}
  
}
