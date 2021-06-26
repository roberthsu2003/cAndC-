main.cpp

#include <iostream>
#include "data.h"

using namespace std;
int main() {
	Student std = {"robert", 79, 80, 70};
	cout << "姓名:" << std.name << endl;
	cout << "國文:" << std.chinese << endl;
	cout << "數學:" << std.math << endl;
	cout << "英文:" << std.english << endl;
}




