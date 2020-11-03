#include <iostream>
using namespace std;

int main() {
	int array[] = {10, 20, 30, 40, 50};
	cout << "array[1]的值" << array[1] << endl;
	cout << "&array[1]的記憶位址" << &array[1] << endl;
	cout << "array+1的記憶位址" << array + 1 << endl;
	cout << "*(&array[1])的值" << *(&array[1]) << endl;
	cout << "*(array+1)的的值" << *(array + 1) << endl;
}
