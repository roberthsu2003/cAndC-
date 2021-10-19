#include <iostream>
using namespace std;
void add(int x, int y, int *ptr){
	*ptr = x+y;	
}

int main() {
  int n = 10;
  int m = 20;
  int sum;
  add(n, m, &sum);
  cout << "sum=" << sum << endl;
  return 0;
}
