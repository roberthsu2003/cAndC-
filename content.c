#include <iostream>
#include <time.h>

using namespace std;
int main() {	
	srandom(time(NULL));
	cout << "亂數:"<< random() << endl;
}

