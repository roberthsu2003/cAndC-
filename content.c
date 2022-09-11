#include <iostream>
using namespace std;

int main() {
	int stu1[5];
	stu1[0] = 78;
	stu1[1] = 97;
	stu1[2] = 65;
	stu1[3] = 59;
	stu1[4] = 85;

	for(int i=0;i < 5;i++){
		cout << "stu1[" << i << "]的值是" << stu1[i] << endl;
	}
}
