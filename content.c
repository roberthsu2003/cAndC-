#include <iostream>
using namespace std;
//定義結構
struct Student{
	const char* name;
	int score;
};

int main() {
	struct Student david;
	david.name = "David";
	david.score = 283;
	cout << "姓名" << david.name << endl;
	cout << "分數" << david.score << endl;
}
