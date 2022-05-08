#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int guess;
	srand(time(NULL));
	guess = (rand() % 10) + 1;
	cout << guess << endl;  	
}
