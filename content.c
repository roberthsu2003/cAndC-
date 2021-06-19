#include <iostream>
using namespace std;

int main() {
	int nums;
	cout << "請輸入排序元素的數量:";
	cin >> nums;
	int array[nums];
	int temp;
	for(int i=0; i < nums; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	cout <<  "排序前:\n";
	for(int i=0; i < nums; i++){
		cout << array[i] << " ";
	}

	cout << "\n\n";

	cout << "排序後:\n";

	//泡沫排序法
	//前面的
	for(int i=0; i<nums-1; i++){
		for(int j=i+1;j<nums;j++){
			if (array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for(int i=0; i < nums; i++){
		cout << array[i] << " ";
	}

	cout << "\n\n";
	

}
