#include <iostream>
using namespace std;

struct Student{
	const char* name;
	int score;
};

int main() {
	struct Student david = {"David", 90};
	cout << "姓名" << "\t" << "成績" << endl;
	cout << david.name << "\t" << david.score;
	return 0;
}
