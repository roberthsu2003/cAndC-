#include <iostream>
using namespace std;

long long int factorial(int n){
	if (n==0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
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
