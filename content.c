main.cpp

#include <iostream>
#include "data.h"

int main() {
  std::cout << "Hello World!\n";
} 




data.h

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;
