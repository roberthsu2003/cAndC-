#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int guess;
	srand(time(NULL));
	//1~99
	int max = 99;
	int min = 1;
	guess = rand() % (max - min + 1) + min;
	cout << guess << endl;  	
}
