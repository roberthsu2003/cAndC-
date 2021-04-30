#include <iostream>
using namespace std;

int main() {
	int array[] = {1,2,3,4,5};
	cout << "取出array第一個值:" << array[0] << endl;
	cout << "取出array第一個值的記憶體位址" << array + 0 << endl;
	cout << "做用指標變數操作法取出第一個的值" << *(array+0) << endl;
}
