#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

int main() {
	int nums;
	cout << "請輸入學生人數:";
	cin >> nums;
	Student students[nums];
}
