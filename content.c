#include <iostream>
using namespace std;

//宣告原型
int add(int, int);
int mul(int, int);

int main() {
	cout << "add(2, 3)=" << add(2, 3) << endl;
	cout << "mul(2, 3)=" << mul(2, 3) << endl;
}

int add(int a, int b){
	return a + b;
}

int mul(int a, int b){
	return a * b;
}
