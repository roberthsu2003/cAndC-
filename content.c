#include <iostream>
using namespace std;
int main() {
	int arr[] = {10, 20 , 30};
	cout << arr[0] << "," << arr[1] << "," << arr[2] << endl;

	int *ptr = arr;
	cout << "ptr+0=" << ptr+0 << endl;
	cout << "ptr+1=" << ptr+1 << endl;
	cout << "ptr+2=" << ptr+2 << endl;
	cout << *(ptr+0) << "," << *(ptr+1) << "," << *(ptr+2) << endl;
}
