#include <iostream>
using namespace std;
void multiplyTen(int *m){ //call by reference
	for (int i=0; i<3; i++){
		m[i] *= 10;
	}
}

int main() {
	int n[3] = {10, 20, 30};
	multiplyTen(n);
	for(int i=0; i<3; i++){
		cout << n[i] << endl;
	}
}
