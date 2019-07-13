//============================================================================
// Name        : array4.cpp
//自鍵盤輸入整數n,程式會建立一維陣列大小為n的動態陣列，並自鍵盤輸入陣列元素資料後，利用指標存取陣列顯示陣列元素。

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "請輸入要配置的一維陣列大小=";
	cin >> n;
	int *p = new int[n];
	for (int i=0; i<n; i++){
		cin >> *(p+i);
	}

	cout << "陣列的元素值為" << endl;
	for(int i = 0; i< n; i++){
		cout << *(p+i) << endl;
	}

	delete[] p;
	return 0;
}
