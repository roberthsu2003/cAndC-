tools.h

#include <iostream>
using namespace std;

void sorted(int arr[], int nums, bool small) {
  for (int f = 0; f < nums - 1; f++) {
    for (int b = f + 1; b < nums; b++) {
      if (small) {
        if (arr[f] > arr[b]) {
          // 2數對調
          int temp = arr[f];
          arr[f] = arr[b];
          arr[b] = temp;
        }
      } else {
        if (arr[f] < arr[b]) {
          // 2數對調
          int temp = arr[f];
          arr[f] = arr[b];
          arr[b] = temp;
        }
      }
    }
  }
}

void printArray(int arr[], int nums){
	for (int i = 0; i < nums; i++) {
    cout << arr[i] << "\t";
  }
	cout << endl;
}



main.cpp

#include <iostream>
#include <time.h>
#include "tools.h"
using namespace std;

int get_number() { 
	return random() % (100 - 1 + 1) + 1; 
}

int main() {
  srandom(time(NULL));
  int nums;
  cout << "請輸入要排序的數值個數:";
  cin >> nums;
  int array[nums];
	for (int i = 0; i < nums; i++) {
    array[i] = get_number();    
  }
  cout << "排序前:" << endl;  
	printArray(array, nums);
  
  //呼叫排序
	cout << "由小到大的排序後:" << endl;
  sorted(array, nums, true);  
  printArray(array, nums);
	
  cout << "由大到小的排序後:" << endl;
  sorted(array, nums, false);
  printArray(array, nums);
}
