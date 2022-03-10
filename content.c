#include <iostream>
using namespace std;
//全域變數
int n;

void showNum(){
	int value = n;
	cout << "=================" << endl;
	for(int n=value; n>=1; n--){
		//n是區塊變數
		cout << "區塊變數n=" << n << endl;
	}
	cout << "===============" << endl;
	cout << "結束for迴圈後,全域變數n=" << n << endl;
}

int main() {
	cout << "請輸入全域變數 n=";
	cin >> n;
	showNum();
}
