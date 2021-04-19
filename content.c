#include <iostream>
#include "tools.h"

using namespace std;



int main() { 
	int nums,temp;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;

	int array[nums];
	for(int i=0; i < nums; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	cout << "排序前:\n";
	for(int i=0; i < nums; i++){
		cout << array[i] << " ";
	}
		
	//smallToBig(array,nums);
	bigToSmall(array,nums);

	cout << "\n";
	cout << "排序後:\n";
	for(int i=0; i < nums; i++){
		cout << array[i] << " ";
	}

	
}




tools.h
#include <iostream>

void smallToBig(int arr[],int nums){
	int temp;
	for(int i=0; i<nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void bigToSmall(int arr[],int nums){
	int temp;
	for(int i=0; i<nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
