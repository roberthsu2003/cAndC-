#include <iostream>
using namespace std;
int main() {
	int array1[] = {10, 20, 30};
	int array2[] = {70, 80, 90};
	int *x = array1;
	for(int i=0; i<3; i++){
		cout << x[i] << "\t";
	}
	cout << endl;

	x = array2;
	for(int i=0; i<3; i++){
		cout << x[i] << "\t";
	}
	cout << endl;

	
}
