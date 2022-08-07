#include <iostream>
#define min(a,b) (a) >= (b) ? (b) : (a)
#define max(a,b) (a) >= (b) ? (a) : (b)
using namespace std;
int main() {
	int x=3,y=8;
	cout << "2數較小值是:"<< (min(x,y)) << endl;
	cout << "2數較大值是:"<< (max(x,y)) << endl;
}
