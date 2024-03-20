#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

int main() {
	Student student[3];
	student[0] = {"robert", 78, 92, 69};
	student[1] = {"alice", 76, 91, 73};
	student[2] = {"jenny", 91, 52, 78};

	for(int i=0; i<3; i++){
		cout << "name:" << student[i].name << endl;
		cout << "chinese:" << student[i].chinese << endl;
		cout << "english:" << student[i].english << endl;
		cout << "math:" << student[i].math << endl;
		cout << "===============" << endl;
	}
}
