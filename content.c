#include <iostream>
using namespace std;

struct student{
	int id;
	string name;
	int chinese, english, math;
};

int main() {
	struct student david;
	david.id = 99001;
	david.name = "David";
	david.chinese = 75;
	david.math = 86;
	david.english = 90;
	
}
