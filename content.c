main.cpp

#include <iostream>
#include "tools.h"
using namespace std;


int main() {	
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	int n[nums];
	//建立亂數
	create_random_array(n,nums);
	cout << "排序前的值:" << endl;
	display_array(n, nums);
	//排序
	sort(n,nums);
	cout << "排序後的值:" << endl;
	display_array(n,nums);	
}


tools.h
#include <iostream>
using namespace std;

void sort(int array[],int nums){
	int temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void display_array(int array[], int nums){
	for(int i=0; i<nums; i++){
		cout << array[i] << "  ";
	}
	cout << endl;
}

void create_random_array(int array[],int nums){
	srandom(time(NULL));
	for(int i=0; i<nums; i++){
		array[i] = 	random() % 100 + 1;
	}
}
