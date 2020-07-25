#include "Person.h"
#include "Person.h"


#include <iostream>

using namespace std;
int main() {
	int radius = 10;
	float area = SQUARE(radius) * PI;
	cout << "面積是:" << area << endl;

	Person person1;
	person1.walk(50);
	cout << add(3,5) << endl;
}






Person.h

#define PI 3.14159
#define SQUARE(x) (x) * (x)

//預防被重覆的#include
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person{
	public:
	int tall;
	string name;
	void walk(int); //輸出走路的速度
};

int add(int, int);

#endif



#endif




Person.cpp
#include "Person.h"

void Person::walk(int w){
	cout << name << "每小時可跑" << w << "公里" << endl;
}

int add(int a, int b){
	return a + b;
}
