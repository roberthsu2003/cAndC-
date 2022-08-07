#include <iostream>
using namespace std;
void multiply10(int x[],int size){
	for(int i=0; i<size; i++){
		x[i] *= 10;
	}
}

void division10(int *x,int size){
	for(int i=0; i<size; i++){
		*(x+i) /= 10;
	}
}

void print(int *x, int size){
	for(int i=0; i<3; i++){
		cout << x[i] << "\t";
	}
	cout << endl;
}

int main() {
	int nums = 3;
	int* n = new int[nums];
	n[0] = 10;
	n[1] = 20;
	n[2] = 30;	
	multiply10(n,nums);
	print(n,nums);
	division10(n, nums);
	print(n,nums);
	delete[] n;	
}
