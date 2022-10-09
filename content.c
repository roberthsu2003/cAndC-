#include <iostream>
#define MIN(x,y) (x)>=(y)?(y):(x) 

using namespace std;
int main() {
	int a=9, b=8;
	cout << "最小值為:" << (MIN(a, b)) << endl;
}
