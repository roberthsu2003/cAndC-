#include <iostream>
using namespace std;

void functionA(int* n){
	*n *= 10;
}

int main() {
	int a = 10;
	functionA(&a);
	cout << "a的內容是" << a << endl;
}
