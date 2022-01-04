#include <iostream>
using namespace std;

int main() {
	int n=10;
	//建立指標變數p,p是儲存n變數的記憶體位址
	int* p = &n;

	cout << *p << endl;
} 
