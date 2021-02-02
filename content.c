#include <iostream>
using namespace std;

int main() {
	unsigned int nums;
	int min;
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
	min = values[0];

	for(int i=1; i<nums; i++){
		min = min <= values[i] ? min: values[i];
	}

	cout << "最小值是:" << min << endl;


}
