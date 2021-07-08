#include <iostream>
using namespace std;

void listArray(int *a){
	//陣列變數的操作法
	cout << a[0] << "," << a[1] << "," << a[2] << endl;

	//指標變數的操作
	cout << *(a+0) << "," << *(a+1) << "," << *(a+2) << endl;
}

int main() {
	int arr[] = {10, 20 , 30};
	listArray(arr);
}
