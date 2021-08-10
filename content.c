#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "請輸入數字:";
	cin >> num;

	if(num%2 == 0){
		cout << "輸入的是偶數";
	}else{
		cout << "輸入的是奇數";
	}
	
	cout << "程式結束";
	return 0;
}
