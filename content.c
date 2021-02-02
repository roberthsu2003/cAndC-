#include <iostream>
using namespace std;

int main() {
	unsigned int nums;
	cout << "請輸入數值數量:";
	cin >> nums;

	int values[nums];

	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "數值:";
		cin >> values[i];
	}
	cout << "程式結束";
}
