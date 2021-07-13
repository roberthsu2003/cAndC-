#include <iostream>
#include "tools.h"


using namespace std;

int main() {
	double us, nt;
	cout << "請輸入您有多少美金:";
	cin >> us;
	nt = us * RATE;
	cout << "您有" << nt << "台幣" << endl;
}

tools.h

#define RATE 32.78
#define saturday 0
#define sunday 1
#define monday 2
#define tuesday 3
#define pin1 0x1245
#define pin2 0x1254
