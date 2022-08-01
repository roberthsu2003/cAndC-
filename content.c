#include <iostream>
using namespace std;
void multiply10(int x[],int size){
	for(int i=0; i<size; i++){
		x[i] *= 10;
	}
}

int main() {
	int n[] = {10, 20, 30};
	multiply10(n,sizeof(n)/sizeof(n[0]));
	for(int i=0; i<3; i++){
		cout << n[i] << "\t";
	}
	cout << endl;
}
