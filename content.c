//請設計一個程式，讓使用者輸入數值，只有加總正偶數值，不加總正奇數值，如果輸入負數，結束程式。
#include <iostream>
using namespace std;
int main() {
	int num = 0;
	int inputValue;
	int sum = 0;
	while(true){		
		cout << "請輸入第" << ++num << "個數值:";
		cin >> inputValue;
		if(inputValue < 0){
			break;
		}else if(inputValue % 2 == 1){
			continue;
		}
		sum += inputValue;
	}

	cout << "所有正偶數的加總是:" << sum << endl;
}
