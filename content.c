#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int min = 5;
	int max = 10;
	srandom(time(NULL));	
	std::cout << random() % (max-min+1) + min << endl; 
}
