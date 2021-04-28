#include <iostream>
using namespace std;
//n是全域變數
int n;

void showNum(){
	int value = n;
	cout << "========================" << endl;
	for(int n=value; n>=1; n--){
		//n是區域變數
		cout << "區域變數 n=" << n << endl;
	}
	cout << "========================" << endl;
	cout << "結速for 迴圈後全域變數n=" << n << endl;

}

int main() {
	cout << "請輸入全域變數n=";
	cin >> n;
	showNum();
	return 0;
}
