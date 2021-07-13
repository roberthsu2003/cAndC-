#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int s,result;
	cout << "請輸入數字:";
	cin >> s;
	result = SQUARE(s);
	cout << s << "的平方為:" << result << endl;

	result = SQUARE(s+1);
	cout << s+1 << "的平方為:" << result << endl;
}


tools.h

#define SQUARE(x) (x) * (x)
