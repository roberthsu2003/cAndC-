#include <iostream>
using namespace std;
int main() {
	int inputNum;
	int sum=0;
	while(true){
		cout << "請輸入數值:";
		cin >> inputNum;
		if(inputNum < 0){
			break;
		}
		//執行底下的一定是大於0的
		if (inputNum % 2 == 1){
			continue;
		}
		sum += inputNum;
	}
	cout << "所有輸入的正偶數的加總是:" << sum << endl;
	return 0;
}
