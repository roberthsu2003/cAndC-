#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int scores[5];
	for(int i=0; i<5; i++){
		scores[i] = random() % (100-50+1) + 50;
		cout << scores[i] << endl;
	}
	cout << scores << endl;
}
