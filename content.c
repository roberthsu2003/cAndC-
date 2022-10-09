main.cpp

#include "size.h"
#include <iostream>

int main() {
  Size tri1(10, 20);
  Size tri2(25, 30);
}


size.h
#ifndef __SIZE_H__
#define __SIZE_H__

class Size{
	public:
	unsigned int x;
	unsigned int y;
	Size(int n, int m){
		x = n;
		y = m;
	}
};

#endif
