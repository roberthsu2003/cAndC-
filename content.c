#include <iostream>
using namespace std;
int main() {
	int sum=0;
	for(int i=2; i<=10; i+=2){
		sum += i;
		cout << "第" << i/2 << "次迴圈的i=" << i << ",總和為" << sum << endl;
	}
	return 0;
}
