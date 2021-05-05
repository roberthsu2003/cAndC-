#include <iostream>
using namespace std;

#define RATE 32.78

int main() {
	double us, nt;
	cout << "請輸入您有多少美金:";
	cin >> us;
	nt = us * RATE;
	cout << "您有" << nt << "台幣" << endl;
	return 0;
}
