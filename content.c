#include <iostream>
#define RATE 32.75

using namespace std;

int main() {
	double us;
	cout << "請輸入您有多少美金:";
	cin >> us;
	double nt = us * RATE;
	cout << "您有" << nt << "台幣" << endl;
}
