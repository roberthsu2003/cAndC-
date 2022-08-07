#include <iostream>
//美金換台幣的匯率
#define RATE 32.78
using namespace std;

int main() {
	double us,nt;
	cout << "請輸入您有多少美金:";
	cin >> 	us;
	nt = RATE * us;
	cout << "您有" << nt << "台幣" << endl;
}
