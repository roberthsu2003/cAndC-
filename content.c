#include <iostream>
#define RATE 29.5

using namespace std;

int main() {
	int us;
	float nt;
	cout << "請輸入您有多少美金:";
	cin >> us;
	nt = us * RATE;
	cout << "您有" << nt << "台幣" << endl;
	return 0;
}
