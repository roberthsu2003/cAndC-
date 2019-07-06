//============================================================================
// Name        : variable1.cpp
//區域變數,區塊變數,全域變數

#include <iostream>
using namespace std;
//全域變數n
int n;
void showNum(){
	//value為區域變數
	int value = n;
	cout << "============================" << endl;
	for(int n = value; n >= 1; n--){
		//n是區塊變數
		cout << "區塊變數 n=" << n << endl;
	}
	cout << "=======================" << endl;
	cout << "結束for 巡圈後 全域變數n=" << n << endl;
}
int main() {
	cout << "請輸入全域變數 n=";
	cin >> n;
	showNum();
	return 0;
}
