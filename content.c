#include <iostream>
//試用if-else敘述，選寫一個判斷輸入的數字為奇數或偶數的程式

using namespace std;
int main() {
	int inputValue;	
	cout << "請輸入一個數字:";
	cin >> inputValue;

	if (inputValue % 2 == 0){
		cout << "您輸入的" << inputValue << "是偶數" << endl;
	}else{
		cout << "您輸入的" << inputValue << "是奇數" << endl;
	}
}
