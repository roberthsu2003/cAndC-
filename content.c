#include <iostream>
using namespace std;
int main() {
	int inputNum;
	int num=0;
	int sum=0;
	do{
		cout << "請輸入第" << num + 1 << "個數值:";
		cin >> inputNum;
		if(inputNum<0) break;
		num++;
		if(inputNum % 2 == 1) continue;
		sum += inputNum;

	}while(true);
	cout << "所有輸入的正偶數的加總是:" << sum;
}
