#include <iostream>
#include <time.h>

using namespace std;
int main() {
	int guess;
	int max = 99;
	int min = 1;
	srandom(time(NULL));
	guess = random() % (max-min+1) + min;
	cout << "================猜數字遊戲=================\n\n";
	cout << "數字:" << guess << endl;
}
