#include <iostream>
#include "tools.h"
using namespace std;
using namespace Robert;
int main() {
	int x = 10;
	int y = 20;
	int total = multiply(x, y);
	cout << "total=" << total << endl;
}




#ifndef __TOOLS_H__
#define __TOOLS_H__ 
namespace Robert{
	int multiply(int a, int b){
		return a * b;
	}
}


#endif
