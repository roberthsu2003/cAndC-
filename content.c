#include <iostream>
using namespace std;
double factorial(double n){
	if(n==1){
		return 1;
	}else{
	 	return n * factorial(n-1);
	}
	
}
int main() {
	double total;
	int n;
	cout << "請輸入數字n:";
	cin >> n;
	total = factorial(n);
	cout << total << endl;
	printf("%d=%20.0f\n",n , total);
	
}
