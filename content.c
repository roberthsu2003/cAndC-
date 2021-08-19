#include <iostream>
using namespace std;

void changeValue(int a[]){
	for(int i=0; i<5; i++){
		a[i] *= 5;
	}
}

void changeValue1(int *a){
	for(int i=0; i<5; i++){
		a[i] *= 5;
	}
}


int main() {
	int array[] = {1, 2, 3, 4, 5};	
	changeValue1(array);

	for(int i=0; i<5; i++){
		cout << array[i] << ",";
	}
	cout << endl;
	return 0;
}
