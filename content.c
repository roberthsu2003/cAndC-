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
	int n[] = {10, 20, 30};
	int nums = sizeof(n)/sizeof(n[0]);
	multiply10(n,nums);
	print(n,nums);
	division10(n, nums);
	print(n,nums);
	
}
