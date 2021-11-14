#include <iostream>
using namespace std;

int main() {	
	srandom(time(NULL));
  	cout << random() % 100 + 1 << endl;
} 
