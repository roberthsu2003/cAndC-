#include <iostream>
using namespace std;

int main() {
	int nums;
	float temp;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	float array[nums];

	for(int i=0; i < nums; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	cout << "排序前:\n";
	for(int i=0; i<nums;i++){
		cout << array[i] << " ";
	}

	//陣列排序
	for(int i=0; i < nums-1; i++){
		for(int j=i+1;j<nums;j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "\n排序後由小到大:\n";
	for(int i=0; i<nums;i++){
		cout << array[i] << " ";
	}

	//陣列排序
	

	cout << "\n排序後由大到小:\n";
	for(int i=0; i<nums;i++){
		cout << array[i] << " ";
	}
}
