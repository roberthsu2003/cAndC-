//============================================================================
// Name        : overload1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int add(int a, int b){
	return a + b;
}

string add(string a, string b){
	return a + b;
}
int main() {
	cout << "add(2,3)=" << add(2, 3) << endl;
	cout << "=======================\n";
	cout << "add(\"Nice\", \"Play\") = " << add("Nice", "Play") << endl;
	return 0;
}
