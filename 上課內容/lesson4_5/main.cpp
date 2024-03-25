#include <iostream>
#define RATE(x) (x) * 32.78

using namespace std;

int main() {

	double us,nt;
	cout << "請輸入美金:";
	cin >> us;
	nt = RATE(us+1);
	cout << "您可換" << nt << "台幣" << endl;
}
