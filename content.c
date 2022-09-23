#include <iostream>
#include <time.h>

using namespace std;

void printArray(int n[], int elements) {
  for (int i = 0; i < elements; i++) {
    cout << n[i] << " ";
  }
  cout << endl;
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

  //泡沫排序法
  int temp;
  for (int i = 0; i < nums - 1; i++) {
    for (int j = i + 1; j < nums; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  cout << "排序後" << endl;
  printArray(array, nums);
}
