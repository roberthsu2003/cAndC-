#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	float array[nums], temp;
	
	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}
	
	cout << "排序前:\n";
	for(int i=0; i<nums; i++){
		cout << array[i] << " ";
	}
	
	
	for(int i=0; i<nums-1;i++){
		for(int j=i+1; j<nums; j++){
			if (array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << "\n";
	cout << "排序後:\n";
	for (int i=0; i<nums; i++){
		cout << array[i] << " ";
	}
	return 0;
}
