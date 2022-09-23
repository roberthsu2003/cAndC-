#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int students = 50;
	int subjects = 5;
	int totals = students * subjects;
	int scores[totals];

	for(int i=0; i<totals; i++){
		scores[i] = random() % (100-50+1) + 50;
	}

	for(int i=0; i<students; i++){
		for(int j=0; j<subjects; j++){
			cout << scores[i*subjects + j] << " ";
		}
		cout << endl;
	}	
}
