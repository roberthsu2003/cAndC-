#include <iostream>
#include <time.h>
using namespace std;

int main() {	
	srandom(time(NULL));
	long random_value = random(); 	
	cout << "亂數總值:"<< random_value << endl;
	cout << "建立0~99的亂數" << random_value % 100 << endl;
}
