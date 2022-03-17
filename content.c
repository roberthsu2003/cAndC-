#include <iostream>
using namespace std;

typedef int INTEGER;
typedef int* POINTER;

int main() {
	INTEGER x = 100, y = 200;
	POINTER ptr = &x;
	x = y;
	cout << "*ptr的值是" << *ptr << endl;
}
