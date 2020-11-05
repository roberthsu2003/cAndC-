#include <iostream>
#include "pro.h"

using namespace std;

int main() {
	double us, nt;
	cout << "請輸入您有多少美金:";
	cin >> us;
	nt = us * RATE;
	cout << "您有" << nt << "台幣" << endl;
}


pro.h
#define RATE 29.96
