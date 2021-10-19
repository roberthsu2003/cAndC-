#include <iostream>

using namespace std;

int factorial(int n){
	if(n == 0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}
int main() {
	int n, total;
	cout << "請輸入數字 n:";	
	cin >> n;
	total=factorial(n);
	cout << n << "!=" << total << endl;
	return 0;
}
