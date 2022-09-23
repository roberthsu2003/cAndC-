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

  cout << "排序後" << endl;
  printArray(array, nums);
}
