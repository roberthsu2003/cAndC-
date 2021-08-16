#include <iostream>
using namespace std;

int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	int array[nums];

	for(int i=0; i<nums; i+=1){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	cout << "排序前:\n";
	for(int i=0; i<nums; i+=1){
		cout << array[i] << " ";
	}

	//陣列排序
	return 0;
}
