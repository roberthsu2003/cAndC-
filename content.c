main.cpp

#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	int a = 666, b = 777;
	cout << "a=" << a << ",b=" << b << endl;
	//呼叫swap的function
	swap(&a,&b);
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
}


tools.h

//定義function
//function的原型
//這是做2個整數的交換內容
void swap(int*, int*);



