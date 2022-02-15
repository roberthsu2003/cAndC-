#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "請輸入數字:";
	cin >> num;
	if( num % 2 == 0){
		cout << "您輸入的數字是偶數" << endl;
	}else{
		cout << "您輸入的數字是奇數" << endl;
	}
}
