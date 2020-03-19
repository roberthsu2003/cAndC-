#include <iostream>
using namespace std;

int main() {
	int n[3] = {1,2,3};
	cout << "陣列變數語法" << n[0] << endl;

	cout << "指標變數的語法" << *(n+0) << endl;

	int *p = n;

	cout << "陣列變數語法" << p[0] << endl;

	cout << "指標變數的語法" << *(p+0) << endl;

}
