#include <iostream>
using namespace std;

long long int factorial(int n){
	int t=1;
	for(int i=1; i<=n; i++){
		t *= i;
	}

	return t;
}

int main() {
	int n;
	long long int result;
	cout << "請輸入數字 n:";
	cin >> n;
	result = factorial(n);
	cout << "結果是:" << result << endl;
	return 0;
}
