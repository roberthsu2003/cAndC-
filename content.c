#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));	
	cout <<  "產生1~10亂數:" << rand() % 10 + 1 << endl;
}
