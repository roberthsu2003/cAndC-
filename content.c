#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srandom(time(NULL));
	cout << random() << endl;
}
