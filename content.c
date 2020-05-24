#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for(int i=2;i<=10;i+=2){
		sum += i;
		cout << "i=" << i << ",總和為" << sum << "\n";
	}
}
