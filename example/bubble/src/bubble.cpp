//============================================================================
// Name        : bubble.cpp
//任由使用者輸入任意個數的數值序列,程式會將此數值序列由小到大排序後顯示
#include <iostream>
using namespace std;

int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	float array[nums],temp;

	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	cout << "排序前:\n";
	for (int i=0; i < nums; i++){
		cout << array[i] << " ";
	}

	//陣列排序
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "\n";
	cout << "排序後:\n";
		for (int i=0; i < nums; i++){
			cout << array[i] << " ";
		}

	return 0;
}
