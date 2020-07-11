#include <iostream>
using namespace std;
//多載(overloading)
int add(int a, int b){
	return a + b;
}

string add(string a, string b){
	return a + b;
}


int main() {
	cout << "add(2, 3)=" << add(2, 3) << endl;
	cout << "=================\n";
	cout << "add()=" << add("Nice", "play") << endl;
	return 0;
}
