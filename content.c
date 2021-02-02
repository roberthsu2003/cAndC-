#include <iostream>
using namespace std;

int main() {
	unsigned int nums;
	int max;
	cout << "請輸入數值數量:";
	cin >> nums;

	int values[nums];

	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "數值:";
		cin >> values[i];
	}
	cout << "陣列內的值有";
	for(int i=0; i< nums; i++){
		cout << values[i] << " - ";
	}
	max = values[0];

	for(int i=1; i<nums; i++){
		max = max >= values[i] ? max: values[i];
	}

	cout << "最大值是:" << max << endl;


}
