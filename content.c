#include <iostream>
using namespace std;

int factorial(int n){
	int total = 1;
	for(int i=2; i<=n; i++){
		total *= i;
	}
	return total;	
}

int main() {
  int n;
  long long int total;
  cout << "請輸入數字n:";
  cin >> n;
  total = factorial(n);
  printf("%d! = %lld\n",n,total);
  return 0;
}
