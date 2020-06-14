#include <iostream>
using namespace std;

int main() {
	char p[] = "Hello";
	cout << "字串=" << p << endl;
	
	cout << "p大小" << sizeof(p) << endl;
	int count = sizeof(p) / sizeof(p[0]) -1;
	for(int i=count-1; i >=0; i--){
		cout << *(p+i);
	}
	cout << endl;

}
