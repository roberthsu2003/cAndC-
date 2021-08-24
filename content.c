student.h

#ifndef _STUDENT_H_
#define _STUDENT_H_

#incldue <iostream>
using namespace std;

class Student{
	public:
		string name;
		int chinese;
		int english;
		int math;
		
		int sum(){
			return chinese + english + math;
		}

		float average(){
			return sum() / 3.0;
		}
}
#endif
