#include <iostream>
#include "data.h"

using namespace std;

int main() {
	student david = {"David",75, 86, 97};	

	cout << "學生姓名是:" << david.name << endl;
	cout << "國文分數是:" << david.chinese << endl;
	cout << "英文分數是:" << david.english << endl;
	cout << "數學分數是是:" << david.math << endl;
	return 0;
}
