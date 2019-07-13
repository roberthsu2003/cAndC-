//============================================================================
// Name        : swapString.cpp
//使用者輸入字串，輸出字串

#include <iostream>
using namespace std;

int main() {
	char *p1=new char[50];

	cout << "請輸入字串:";
	cin >> p1;

	cout << p1 << endl;

	int i = 0;
	while(*(p1+i) != '\0'){
		cout << *(p1+i) << ",";
		i++;
	}
	return 0;
}
