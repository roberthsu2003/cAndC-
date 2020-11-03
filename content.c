#include <iostream>
using namespace std;

int main() {
	int array[] = {10, 20, 30, 40, 50};
	//array = {50, 40, 30, 20 ,10}

	int *point = array;
	int array1[] = {50, 40, 30, 20, 10};
	point = array1;
	cout << "*(point+0)=" << *(point+0) << endl;

	char name[] = "Hello! World";
	//name = "robert";
	
	const char *name123 = "Hello! World";
	name123 = "robert";
	name123 = "jenny";
	cout << "name123=" << name123 << endl;
	cout << "*(name123+1)=" << *(name123+1) << endl;

	cout << "name123[1]=" << name123[1] << endl;


	
}
