#include <iostream>
using namespace std;

int main() {
	int array[] = {1, 2, 3};
	cout << "array[2]=" << array[2] << endl;
	int *pary = array;
	cout << "*(pary+2)=" << *(pary+2) << endl;
}
