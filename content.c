#include <iostream>
using namespace std;

class Student{
	private:
	int _chinese;

	public:
	Student(int c){
		setChinese(c);
	}

	//_chinese的setter
	void setChinese(int c){
		if(c > 100){
			_chinese = 100;
		}else if(c < 0){
			_chinese = 0;
		}else{
			_chinese = c;
		}

	}

	//_chinese的getter
	int getChinese(){
		return _chinese;
	}

};


int main() {
	Student stu1(-10);
	cout << stu1.getChinese() << endl;
}
