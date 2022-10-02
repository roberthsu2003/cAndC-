#include <iostream>
using namespace std;
// overload
int add(int a, int b) { 
	return a + b; 
	}

int add(int a, int b, int c) {
	return a + b + c; 
}

string add(string a, string b) {
	return a + b; 
}

int main() { 
	cout << add(10,20) << endl;
	cout << add(10, 20, 30) << endl;
	cout << add("abc", "efg") << endl;
}
