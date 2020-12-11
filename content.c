
tool.h

//宣告原型
int add(int, int);
int mul(int, int);

//實作原型
int add(int a, int b){
	return a + b;
}

int mul(int a, int b){
	return a * b;
}


main.cpp
#include <iostream>
#include "tool.h"

using namespace std;



int main() {
	cout << "add(2, 3)=" << add(2, 3) << endl;
	cout << "mul(2, 3)=" << mul(2, 3) << endl;
}

