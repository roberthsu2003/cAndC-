#include <iostream>
using namespace std;

void changeValue(int a[]){
	for(int i=0; i<5; i++){
		a[i] *= 5;
	}
}

void changeValue1(int *a){
	//使用陣列變數的操作法
	for(int i=0; i<5; i++){
		a[i] *= 5;
	}
}

void changeValue2(int *a){
	//使用指標變數的操作法
	for(int i=0; i<5; i++){
		*(a + i) *= 5;
	}
}


int main() {
	int array[] = {1, 2, 3, 4, 5};	
	changeValue2(array);

	for(int i=0; i<5; i++){
		cout << array[i] << ",";
	}
	cout << endl;
	return 0;
}
