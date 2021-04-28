#include <iostream>
using namespace std;

int factorial(int n){
	if(n==1){
		return 1;
	}else{
		return n * factorial(n-1);
	}
	
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
