#include <iostream>
#include <time.h>

using namespace std;

void sortedOfArray(int a[],int nums){
	for (int i = 0; i < nums - 1; i++) {
	    for (int j = i + 1; j < nums; j++) {
	      if (a[i] > a[j]) {
	        int temp;
	        temp = a[i];
	        a[i] = a[j];
	        a[j] = temp;
	      }
	    }
    }
}

void sortedOfArray1(int *ptr, int nums){
	for (int i = 0; i < nums - 1; i++) {
	    for (int j = i + 1; j < nums; j++) {
	      if (*(ptr+i) > *(ptr+j)) {
	        int temp;
	        temp = *(ptr+i);
	        *(ptr+i) = *(ptr+j);
	        *(ptr+j) = temp;
	      }
	    }
    }
}


int main() {
  int nums;
  srandom(time(NULL));
  cout << "請輸入要排序的數值個數:";
  cin >> nums;

  int array[nums];

  for (int i = 0; i < nums; i++) {
    array[i] = random() % 99 + 1;
  }

  //排序前
  cout << "排序前:" << endl;
  for (int i = 0; i < nums; i++) {
    cout << array[i] << "\t";
  }
  cout << endl;

 

  //泡沫排序
  sortedOfArray1(array,nums);

  //排序後
  cout << "排序後:" << endl;
  for (int i = 0; i < nums; i++) {
    cout << array[i] << "\t";
  }
  cout << endl;
}
