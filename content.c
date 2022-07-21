#include <iostream>
using namespace std;

int main() {
	int n = 10;
	cout << "n變數的記憶體位址是" << &n << endl;
	cout << "n變數的值是" << n << endl;

	double m = 5;
	cout << "m變數的記憶體位址是" << &m << endl;
	cout << "m變數的值是" << m << endl;

	//建立陣列
	int arr[] = {1, 2, 3};
	cout << "陣列變數arr內儲存的值是" << arr << endl;
	cout << "arr[0]的記憶體位址是:" << &arr[0] << endl;
	cout << "arr[1]的記憶體位址是:" << &arr[1] << endl;
	cout << "arr[2]的記憶體位址是:" << &arr[2] << endl;
}
