#include <iostream>
#include <time.h>

using namespace std;
int main() {	
	srandom(time(NULL));
	long random_value = random();
	cout << "亂數值:"<< random_value << endl;
	cout << "亂數值0~99:"<< random_value % 100 << endl;
	cout << "亂數值1~100:"<< random_value % 100 + 1 << endl;
	cout << "亂數值50~60:" << random_value % (60-50+1) + 50 << endl;
}

