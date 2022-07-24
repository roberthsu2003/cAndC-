#include <iostream>
using namespace std;

//全或變數
int n;

void showNum(){
	//區域變數
	int value = n;
	cout << "============" << endl;
	for(int n=value; n>=1; n--){
		//n為區塊變數
		cout << "區塊變數 n=" << n << endl;
	}
	cout << "區域變數value" << value << endl;
}

int main() {
  cout << "請輸入全域變數 n=";
  cin >> n;
  showNum();
}
