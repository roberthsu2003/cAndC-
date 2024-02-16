#include <iostream>
using namespace std;

int main() {
  int n = 5;
  n = n + 10;
  cout << "n=" << n << endl;

  int m = 5;
  m += 10; //複和指定運算子
  cout << "m=" << m << endl;

  m *= 10; //複和指定運算子
  cout << "m=" << m << endl;
}
