#include <iostream>
#include "pro.h"
#include "pro.h"

using namespace std;

int main() {
  cout << RATE << endl;
}


pro.h
//不會重覆#define
#include <iostream>
using namespace std;

#ifndef RATE

#define RATE 32.21
class Abc{
	public:
	int tall;
	string name;
};

#endif
	
