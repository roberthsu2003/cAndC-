#include <iostream>
using namespace std;

void function1(int c){	
	c++;
	cout << "c的值是:" << c << endl;
}

int main() {
  int a = 10;
	int b = 20;
	function1(a);
	cout << "a的變數是:" << a << endl;
}
