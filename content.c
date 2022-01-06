//自鍵盤輸入一個數字n, 利用遞迴來計算n階層(n!)
#include <iostream>
using namespace std;

int factorial(int n){
	if (n ==0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
	
}

int factorial1(int n){
	int t = 1;
	for(int i=1; i<=n; i++){
		t *= i;
	}
	return t;
}

int main() {
	int n,total;
	cout << "請輸入數字n:";
	cin >> n;
	total = factorial1(n);
	cout << n << "!是" << total << endl;
} 
