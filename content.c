#include <iostream>
using namespace std;
int main() {
	int num = 3;
	int* n = new int[3];
	*(n+0) = 10;
	*(n+1) = 20;
	*(n+2) = 30;

	for(int i=0; i<num; i++){
		cout << *(n+i) << "\t";
	}
	cout << endl;
}
