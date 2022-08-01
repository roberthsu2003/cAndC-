#include <iostream>
using namespace std;

int* create_sequence_space(){
	int* n = new int[3];
	n[0] = 10;
	n[1] = 20;
	n[2] = 30;
	return n;
}



int main() {
	int* y = create_sequence_space();
	for(int i=0; i<3; i++){
		cout << y[i] << "\t";
	}
	cout << endl;
}
