#include <iostream>
#include <time.h>

using namespace std;

void printArray(int n[], int elements) {
  for (int i = 0; i < elements; i++) {
    cout << n[i] << " ";
  }
  cout << endl;
}

void sorted(int n[], int elements) {
  //泡沫排序法
  int temp;
  for (int i = 0; i < elements - 1; i++) {
    for (int j = i + 1; j < elements; j++) {
      if (n[i] > n[j]) {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }
}


void sorted1(int n[], int elements) {
  //泡沫排序法
  int temp;
  for (int i = 0; i < elements - 1; i++) {
    for (int j = i + 1; j < elements; j++) {
      if (n[i] < n[j]) {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }
}

int main() {
  srandom(time(NULL));
  int nums;
  cout << "請輸入要排序的數值個數:";
  cin >> nums;

  int array[nums];
  for (int i = 0; i < nums; i++) {
    array[i] = random() % (100 - 1 + 1) + 1;
  }
  cout << "排序前" << endl;
  printArray(array, nums);

  sorted(array, nums);
  cout << "排序後" << endl;
  printArray(array, nums);

	sorted1(array,nums);
	cout << "排序後" << endl;
	printArray(array, nums);
}
