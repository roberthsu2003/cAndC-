#include <iostream>
using namespace std;

int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	float array[nums],temp;

	for(int i=0;i<nums;i++){
		printf("請輸入第%d個數值:", i+1);
		cin >> array[i];
	}

	cout << "排序前\n";
	for(int i=0;i<nums;i++){
		cout << array[i] << " ";
	}

	for(int i=0; i<nums-1;i++){
		for(int j=i+1; j<nums; j++){
			if(array[i] > array[j]){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
			}
		}
	}
	cout << "\n";
	cout << "由小到大排序\n";
	for(int i=0;i<nums;i++){
		cout << array[i] << " ";
	}

	cout << "\n\n";
	cout << "由大到小排序\n";
	for(int i=nums-1; i>=0;i--){
		cout << array[i] << " ";
	}
}
