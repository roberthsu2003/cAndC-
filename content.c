#include <iostream>
#define SQUARE(x) (x) * (x)

using namespace std;
int main() {
	int s, result;
	cout << "請輸入數字:";
	cin >> s;
	result = SQUARE(s);
	cout << s << "的平方值為:" << result << endl;
	result = SQUARE(s+1);
	cout << s+1 << "的平方值為:" << result << endl;
	return 0;
}
