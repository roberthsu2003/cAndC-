#include <iostream>

#include <iostream>
using namespace std;

// 使用for迴圈取代recursive
double factorial(int n) {
	double t = 1;
	for(int i=n; i>=1; i--){
		t *= i;
	}
	return t;
}


int main() {
  double b, total;
  cout << "請輸入數字 n:";
  cin >> b;
  total = factorial(b);
  printf("%.0f!是%20.4f\n", b, total);
}
