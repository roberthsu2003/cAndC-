//全域變數，區塊變數，區域變數

#include <iostream>
using namespace std;
int n; //全域變數

void showNum(){
	int value = n; //區域變數
	cout << "======================" << endl;
	for(int n=value; n >= 1; n--){
		cout << "區塊變數n=" << n << endl;
	}
	cout << "======================" << endl;
	cout << "全域變數n=" << n << endl;
}

int main() {
	cout << "請輸入全域變數 n=";
	cin >> n;
	showNum();
	return 0;
} 
