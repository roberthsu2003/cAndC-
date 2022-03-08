#include <iostream>
using namespace std;
int sum(int *m){ //call by reference
	int total=0;
	for (int i=0; i<3; i++){
		total += m[i];
	}
	return total;
}

int main() {
	int n[3] = {10, 20, 30};
	int total = sum(n);
	cout << "加總後的值是:" << total << endl;
	
}
