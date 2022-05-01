#include <iostream>
using namespace std;
//請計算1~某一個正整數的總合
int main() {
	int sum=0;
	int someone=0;
	cout << "請輸入某一正整數:";
	cin >> someone;
	
	for(int i=1;i <= someone; i++){
		sum += i;
	}
	cout << "1~" << someone <<"的總合是:" << sum << endl;
}
