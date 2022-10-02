#include <iostream>
using namespace std;
//遞迴(recursive)
double factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
	
}

int main() {
	int n;
	double total;
	cout << "請輸入數字n:";
	cin >> n;
	total = factorial(n);
	cout << n << "!=" << total << endl;
	
}
