#include <iostream>
using namespace std;
int main() {
	int inputNum;
	string message;
	cout << "請輸入數字:";
	cin >> inputNum;
	if(inputNum % 2 == 0){
		message = "偶數";
	}else{
		message = "奇數";
	}
	cout << "您輸入的" << inputNum << "是" << message << endl;
}
