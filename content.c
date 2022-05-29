#include <iostream>
using namespace std;
//call by Reference
void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int n = 666;
	int m = 888;
	cout << "原始值n=" << n << ",m=" << m << endl;
	swap(n,m);
	cout << "交換後n=" << n << ",m=" << m << endl;
}
