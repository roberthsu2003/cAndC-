//撰寫一個可以判斷輸入數字為正負數以及奇偶數的的程式
#include <iostream>
using namespace std;

int main() {
	int inputNumber;
	cout << "請輸入數字:";
	string message;
	cin >> inputNumber;
	
	if(inputNumber < 0){
		if(inputNumber % 2 == 0){
			message = "負偶數";
		}else{
			message = "負奇數";
		}
	}else{
		if(inputNumber % 2 == 0){
			message = "正偶數";
		}else{
			message = "正奇數";
		}
	}

	cout << "您輸入的" << inputNumber << "是" << message << endl;
}
