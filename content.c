tool.h

void sorted(int array[],int nums){
	int temp;
	for(int i=0;i<nums-1;i+=1){
		for(int j=i+1;j<nums;j+=1){
			if(array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}


main.cpp

#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	int array[nums];
	int temp;

	for(int i=0; i<nums; i+=1){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	cout << "排序前:\n";
	for(int i=0; i<nums; i+=1){
		cout << array[i] << " ";
	}

	//陣列排序
	sorted(array,nums);
	
	cout << "\n";
	cout << "排序後:\n";
	for(int i=0; i<nums; i+=1){
		cout << array[i] << " ";
	}
	return 0;
}
