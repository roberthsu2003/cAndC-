#include <iostream>
using namespace std;

void print_array(int *array,int count){
	for(int i=0;i < count; i++){
		cout << array[i] << " ";
	}
	cout << endl;

	for(int i=0;i < count; i++){
		cout << *(array+i) << " ";
	}
	cout << endl;
}

int main() {
	int array[] = {100, 200, 300};
	print_array(array,3);
}
