#include <iostream>
using namespace std;
int add(int x, int y) { // call value
  int sum = x + y;
  return sum;
}

void add1(int x, int y, int *sum) { 
	*sum = x + y; 
}

int main() {
  int n = 10; //區域變數n
  int m = 20;
  int sum;
  int total = add(n, m);
  add1(n, m, &sum);

  cout << "total=" << total << endl;
  cout << "sum=" << sum << endl;
  return 0;
}
