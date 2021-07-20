#include <iostream>
#include "person.h"

using namespace std;



int main() {
	Person p1("徐國堂",179, 75);
	cout << "姓名:" << p1.name << endl;
	cout << "身高:" << p1.height << endl;
	cout << "體重:" << p1.weight << endl;
	cout << "BMI:" << p1.getBmi() << endl;
	p1.suggestion();

	Person p2("robert",170, 100);
	cout << "姓名:" << p2.name << endl;
	cout << "身高:" << p2.height << endl;
	cout << "體重:" << p2.weight << endl;
	cout << "BMI:" << p2.getBmi() << endl;
	p2.suggestion();
}


