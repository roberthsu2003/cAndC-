#include <iostream>
using namespace std;

int add(int a, int b){
	return a + b;
}

int main() {
  int total = add(37, 63);
  cout << "total=" << total << endl;
}
