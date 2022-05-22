#include <iostream>
using namespace std;

long long int factorial(int n){
	int total = 1;
	for(int i=n; i>0; i--){
		total *= i;
	}
	return total;
	
}

int main() {
	int n;
	long long int result;
	cout << "請輸入階層:";
	cin >> n;
	result = factorial(n);
	cout << n << "!=" << result << endl;
}
