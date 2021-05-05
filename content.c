#include <iostream>
using namespace std;

//#define SQUARE(x) x * x
#define SQUARE(x) (x) * (x)

int main() {
	int s, result;
	cout << "請輸入數字:";
	cin >> s;
	result = SQUARE(s+1);
	cout << s << "的平方為:" << result << endl;
	
	return 0;
}
