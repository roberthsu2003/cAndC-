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
	
	cout << "由小到大的排序後的值:" << endl;
	//由小到大的排序
	sort(n,nums,false);
	display_array(n,nums);

	cout << "由大到小的排序後的值:" << endl;
	sort(n,nums,true);
	display_array(n,nums);
}


tools.h
#include <iostream>
using namespace std;

//宣告function原型->說明
/*----------------------------
void sort(int array[],int nums),
array是要給陣列
nums是要給這個陣列的元素數值
是由小到大的排序
-----------------------------*/
void sort(int array[],int nums);


/*----------------------------
void sort(int array[],int nums,bool desc)
說明
-----------------------------*/
void sort(int array[],int nums,bool desc);


/*----------------------------
void display_array(int array[], int nums)
說明
-----------------------------*/
void display_array(int array[], int nums);


/*----------------------------
void create_random_array(int array[],int nums)
說明
-----------------------------*/
void create_random_array(int array[],int nums);





void sort(int array[],int nums){
	int temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void sort(int array[],int nums,bool desc){
	int temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if(desc==false){
				if (array[i] > array[j]){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}else{
				if (array[i] < array[j]){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
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
