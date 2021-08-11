#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout << "請輸入被除數(整數):";
	cin >> n;
	cout << "請輸入除數(整數,不可以為0):";
	cin >> m;
	cout << "商:" << n/m << "餘數:"<< n % m<< endl;
	return 0;
}
