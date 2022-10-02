#include <iostream>
using namespace std;
int add(int x, int y){ // call value
	int sum = x + y;
	return sum;
}

int main() {
	int n = 10; //區域變數n
	int m = 20;
	int total = add(n, m);
	cout << "total=" << total << endl;
	return 0;
}
