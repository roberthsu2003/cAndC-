#include <iostream>
#define WINDOWS

using namespace std;
int main() {
	#ifdef MAC
	cout << "這台電腦是mac" << endl;
	#else
	cout << "這台電腦是windows" << endl;
	#endif
}
