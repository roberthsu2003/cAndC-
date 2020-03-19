#include <iostream>
using namespace std;
int main() {
	int *p = new int(100);
	cout << *p << endl;
	int myarr[] = {10, 20, 30, 40, 50};
	int *arr = new int[5];
	for(int i=0; i<5; i++){
		arr[i] = 10;
		*(arr+i) = 20;
	}

	cout << *(arr+0);
	
}
