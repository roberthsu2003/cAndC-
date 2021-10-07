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

	cout << "排序前" << endl;
	for(int i=0; i<nums; i++){
		cout << array[i] << " ";
	}
	cout << endl;

	//泡沫排序
	for(int i=0; i<nums-1; i++){
		for(int j=i+1; j<nums; j++){
			if(array[i] > array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "排序後" << endl;
	for(int i=0; i<nums; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
