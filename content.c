#include <iostream>
#include "tools.h"
#include "tools.h"
#include "tools.h"
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

#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <iostream>
#define SQUARE(x) (x) * (x)

using namespace std;

typedef struct Student{
	string name;
	string id;
	int chinese;
	int math;
	int english;
}Student;

#endif
