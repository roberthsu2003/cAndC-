#include <iostream>
using namespace std;

int main() {
	int n[3] = {1, 2, 3};
	//陣列變數
	cout << n[0] << endl;
	cout << &n[0] << endl;

	//指標變數的語法
	cout << *(n+0) << endl;
	cout << n+0 << endl;

}
