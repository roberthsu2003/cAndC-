main.cpp

#include <iostream>
#include "person.h"
#include "person.h"

int main() {
  std::cout << "Hello World!\n";
}



person.h

#ifndef __PERSON_H__
#define __PERSON_H__

#include <cmath>
#include <iostream>
using namespace std;

class Person {
public:
  string name;
  int height;
  int weight;

  double bmi() { 
	  return weight / pow(height / 100.0, 2); 
  }
};
#endif

