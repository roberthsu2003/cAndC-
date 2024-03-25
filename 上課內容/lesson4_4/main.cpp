#include <iostream>
#define RATE 32.78

using namespace std;
//const double RATE = 32.78;
int main() {
	
	double us,nt;
	cout << "請輸入美金:";
	cin >> us;
	nt = us * RATE;
	cout << "您可換" << nt << "台幣" << endl;
}
