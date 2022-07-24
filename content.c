#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int max = 49;
	int min = 1;
	srandom(time(NULL));	
	long random_value = random();
	cout << random_value << endl;
	//1~49
	cout << random_value % (max - min + 1) + min << endl;
}
