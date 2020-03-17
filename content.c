#include <iostream>
using namespace std;

int n;
void showNum(){
	int value = n;
	cout << "=================" << endl;
	for(int n=value; n>=1; n--){
		//n 區塊變數
		cout << "區塊變數 n=" << n << endl;
	}
}

int main() {
	cout << "請輸入全域變數 n=";
	cin >> n;
	showNum();
	return 0;
}
