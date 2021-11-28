#include <iostream>
using namespace std;

void add(int a, int b, int &total){
	total = a + b;
}

void add(int a, int b, int *total){
	*total  = a + b;
}

int add(int a, int b){
	return a+b;
}

int main() {
	int a = 10;
	int b = 20;
	int sum;
	
	
	
	
	
	/*
	sum = add(a,b); 
	*/

	/*
	add(a, b, &sum);
	*/

	add(a,b,sum);

	cout << sum << endl;
} 
