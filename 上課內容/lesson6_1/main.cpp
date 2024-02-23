#include <iostream>
#include <time.h>
using namespace std;

int main() {
	//cout << time(NULL) << endl;
	int min = 10;
	int max = 12;
	srandom(time(NULL));
	cout << random() % (max - min + 1) + min << endl;
}
