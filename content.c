#include <iostream>
using namespace std;

int main() {
	//比較運算子
	int a = 2, b = 2;
	cout << "a==b " << (a==b) << endl;

	//
	cout << "not 運算子:" << !false  << endl;

	int x = 10, y = 10, z = 20;
	cout << "x=10同時y=10嗎?===>" << (x==10 && y==10) << endl;
	cout << "x=10同時z=10嗎?===>" << (x==10 && z==10) << endl;

	cout << "x=10或者y=10嗎?====>" << (x==10 || y==10) << endl;
	cout << "x=10或者z=10嗎?====>" << (x==10 || z==10) << endl;
}
