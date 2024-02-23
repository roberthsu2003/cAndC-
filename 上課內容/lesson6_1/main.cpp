#include <iostream>
#include <time.h>
using namespace std;

int main() {
	//cout << time(NULL) << endl;
	srandom(time(NULL));
	cout << random() << endl;
}
