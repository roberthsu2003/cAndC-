#include <iostream>
//請設計一個程式，讓使用者輸入數值，只有加總正偶數值，不加總正奇數值，如果輸入負數，結束程式。

using namespace std;
int main() {
	int inputNum;
	int sum = 0;
	while(true){
		cout << "請輸入數值:";
		cin >> inputNum;
		if(inputNum < 0){
			break;
		}else if (inputNum % 2 == 1){
			continue;
		}else{
			sum += inputNum;
		}
	}
	cout << "所有輸入的正偶數的加總是:" << sum << endl;
}
