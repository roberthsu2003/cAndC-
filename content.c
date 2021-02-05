#include <iostream>
using namespace std;

int main() {
	int ary[] = {1, 2, 3};
	const char *name = "robert";

	for(int i=0; i<3; i++){
		cout << ary[i] << endl;
	}

	for(int i=0; i<6; i++){
		cout << *(name+i) << endl;
	}

	for(int i=0; i<3; i++){
		cout << *(ary+i) << endl;
	}

	for(int i=0; i<6; i++){
		cout << name[i] << endl;
	}
}
