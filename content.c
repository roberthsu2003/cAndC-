#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srandom(time(NULL));	
	long random_value = random();
	cout << random_value << endl;
}
