#include <iostream>
using namespace std;

int main() {
	//建立陣列變數
	int arr[5];
	//給陣列變數內容值
	arr[0] = 78;
	arr[1] = 90;
	arr[2] = 73;
	arr[3] = 92;
	arr[4] = 72;

	//取出陣列內的值
	for(int i=0;i<5;i++){
		cout << arr[i] << endl;
	}
}
