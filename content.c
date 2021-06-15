#include <iostream>
using namespace std;

int main() {
	int inputNumber;
	cout << "請輸入數字:";
	cin >> inputNumber;
	if(inputNumber % 2 == 0){
		cout << "偶數" << endl;
	}else{
		cout << "奇數" << endl;
	}
}
