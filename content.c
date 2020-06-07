#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int n;

void showNum(){
	//value為區域變數
	int value = n;
	cout << "=========================\n";
	for(int n=value;n >= 1; n--){
		//n區塊變數
		cout << "區塊變數 n=" << n << endl;
	}
	cout << "=======================\n";
	cout << "結束for迴圈後 全域變數n=" << n << endl;
}

int main() {
	cout << "請輸入全域變數 n=";
	cin >> n;
	showNum();
}
