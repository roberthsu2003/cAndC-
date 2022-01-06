#include <iostream>
using namespace std;

int add(int a, int b){
	return a + b;
}

//overloading
double add(double a, double b){
	return a + b;
}

//overloading
string add(string a, string b){
	return a + b;
}

int main() {
	cout << add(5,6) << endl;
	cout << add(5.5, 7.1) << endl;
	cout << add("Hello! ", "World") << endl;
} 
