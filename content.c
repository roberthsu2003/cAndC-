#include <iostream>
#define RATE 28.25


using namespace std;

int main() {
	float us,nt;
	cout << "請輸入您有多少美金:";
	cin >> us;
	nt = us * RATE;
	cout << "您有" << nt << "台幣" << endl;
}
