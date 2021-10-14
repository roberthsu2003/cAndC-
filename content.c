#include <iostream>
#include <time.h>

using namespace std;
int main() {
	int lot[49];
	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}

	for(int i=0; i<49; i++){
		cout << lot[i] << " ";
	}
	srand(time(NULL));
	cout << rand() << endl;
	return 0;
}
