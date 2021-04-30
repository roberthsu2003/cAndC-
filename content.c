#include <iostream>
using namespace std;

int add(int *address){
	int total=0;
	for(int i=0; i<5; i++){
		total += *(address+i);
	}
	return total;
}

int main() {
	int scores[] = {67, 85, 74, 92, 72};
	int total = add(scores);
	cout << "總分為" << total << endl;
}
