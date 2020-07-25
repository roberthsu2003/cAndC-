#include <iostream>
//marco 巨集
using namespace std;
//#define SQUARE(x) x * x
#define SQUARE(x) (x) * (x)
int main() {
	int s, result;
	cout << "請輸入數字:";
	cin >> s;
	result = SQUARE(s);
	cout << s << "的平方為:" << result << endl;

	result = SQUARE(s+1);
	//result = (5+1) * (5+1);
	cout << s+1 << "的平方為:" << result << endl;	
}
