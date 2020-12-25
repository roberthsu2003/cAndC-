#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const char *p = "robert Hsu";
	cout << "字串=" << p << endl;
	cout << "p的大小" << strlen(p) << endl;
	int count = strlen(p) - 1;
	for(int i=count; i >= 0; i--){
		cout << *(p+i);
	}
	cout << endl;
	return 0;
}
