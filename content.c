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

void random_value(int arr[], int nums){
	for(int i=0; i<nums; i++){
		arr[i] = random() % (100-1+1) + 1;
	}
}


main.cpp

#include <iostream>
#include "tools.h"
#include <time.h>

using namespace std;
int main() {
	srandom(time(NULL));
	int a[10];
	random_value(a,10);
	cout << "排序前:" << endl;
	printArray(a, 10);
	cout << "排序後:" << endl;	
	sorted(a,10,true);
	printArray(a, 10);
}
