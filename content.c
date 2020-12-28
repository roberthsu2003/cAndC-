#include <iostream>
#include "tool.h"
using namespace std;

int main() {
	int s, result;
	cout << "請輸入數字:";
	cin >> s;
	result = SQUARE(s+1);
	cout << s << "的平方為:" << result << endl;
}

tool.h

#define RATE 32.78
//marco 巨集
#define SQUARE(x) (x) * (x)
//定義一個結構
typedef struct student{
	const char *name;
	int chinese, math, english;
} student;
