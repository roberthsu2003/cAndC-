#include <iostream>
using namespace std;

int main() {
	int array[] = {1, 2, 3, 4, 5};
	cout << "使用陣列變數取出值" << array[1] << endl;
	cout << "使用陣列變數取出位址" << &array[1] << endl;
	cout << "使用指標變數取出位址" << (array+1) << endl;
	cout << "使用指標變數取出值" << *(array+1) << endl;
}
