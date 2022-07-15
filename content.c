#include <iostream>
#include <time.h>

using namespace std;
int main() {
	srandom(time(NULL));
	int min = 50;
	int max = 60;
	cout << min << "~" << max << "的亂數是:" << random() % (max-min+1) + min << endl;
}
