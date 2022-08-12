#include <iostream>
#include "tools.h"
#include "tools.h"



using namespace std;
int main() {
	int x = 10;
	int y = 20;
	int total = multiply(x, y);
	cout << "total=" << total << endl;
}





#ifndef __TOOLS_H__
#define __TOOLS_H__ 

int multiply(int a, int b){
	return a * b;
}

#endif
