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
		cout << scores[i] << " ";
	}
	cout << endl;
}
