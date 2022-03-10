#include <iostream>
#include <stdlib.h>
#include <time.h>
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

int main() {
	srandom(time(NULL));
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	int n[nums];
	//給陣列值
	for(int i=0; i<nums; i++){
		n[i] = 	random() % 100 + 1;
	}
	//排序
	sort(n,nums);	
	for(int i=0; i<nums; i++){
		cout << n[i] << "  ";
	}
	cout << endl;
	
	
}
