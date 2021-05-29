#include <iostream>
using namespace std;

int main() {
	int inputNumber;
	string message;
	cout << "請輸入數字:";
	cin >> inputNumber;

	if(inputNumber % 2 == 0){
		message = "偶數";
	}else{
		message = "奇數";
	}

	cout << "您輸入的" << inputNumber << "是"<< message << endl;

	return 0;
}
