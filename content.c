#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	cout << random() << endl;
}
