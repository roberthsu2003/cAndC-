#include <iostream>
#include "tools.h"
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
	display(array,nums);
	cout << endl;

	//泡沫排序
	sorted(array,nums);
	

	cout << "排序後" << endl;
	display(array,nums);
	cout << endl;
}


tools.h

#include <iostream>
using namespace std;

void display(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

void sorted(int arr[],int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
