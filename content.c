#include <iostream>
using namespace std;

int main() {
	//建立連續的記憶體空間
	int* par = new int[5];
	cout << "請輸入5個數值(中間空白):";
	for(int i=0; i<5; i++){
		cin >> *(par+i);
	}

	//輸出
	for(int i=0; i<5; i++){
		cout << *(par+i) << "\t";
	}
	cout << endl;
}
