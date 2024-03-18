#include <iostream>
#include <time.h>

using namespace std;

int main() {
	//cout << time(NULL) << endl;
	srandom(time(NULL)); //建立亂數種子
	int min = 100;
	int max = 500;
	
	cout << random() % (max - min + 1) + min << endl;
}
