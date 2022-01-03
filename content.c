#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout << "請輸入被除數:";
	cin >> n;

	cout << "請輸入除數:";
	cin >> m;

	cout << n << "/" << m << ",商=" << n/m << ",餘數=" << n % m << endl;
} 
