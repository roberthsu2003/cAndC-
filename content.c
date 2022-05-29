#include <iostream>
using namespace std;

int main() {
	int array[] = {100, 200, 300};
	//透過陣列變數取出值
	for(int i=0; i<3; i++){
		cout<< array[i] << " ";
	}
	cout << endl;

	//透過陣列變數取出元素記憶體位置
	for(int i=0; i<3; i++){
		cout << &array[i] << " ";
	}
	cout << endl;

	//透過指標變數取出記憶體位置
	int *ptr_array = array;
	for(int i=0; i<3; i++){
		cout << ptr_array + i << " ";
	}
	cout << endl;

	//透過指標變數取出元素值
	
	for(int i=0; i<3; i++){
		cout << *(ptr_array + i) << " ";
	}
	cout << endl;
}
