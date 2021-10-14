#include <iostream>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	cout << rand() << endl;
	return 0;
}
