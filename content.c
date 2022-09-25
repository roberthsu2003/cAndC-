#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int i[5];
	for(int a=0; a<5;a++){
		i[a] = random() % (100-50+1) + 50;
	}

	for(int a=0; a<5;a++){
		cout << "a[" << a << "]=" << i[a] << endl;
	}
}
