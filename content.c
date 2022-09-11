#include <iostream>
#include <time.h>
using namespace std;

void sorted(int arr[], int nums) {
  for (int f = 0; f < nums - 1; f++) {
    for (int b = f + 1; b < nums; b++) {
      if (arr[f] > arr[b]) {
        // 2數對調
        int temp = arr[f];
        arr[f] = arr[b];
        arr[b] = temp;
      }
    }
  }
}

int get_number() { return random() % (100 - 1 + 1) + 1; }

int main() {
  srandom(time(NULL));
  int nums;
  cout << "請輸入要排序的數值個數:";
  cin >> nums;
  int array[nums];
  cout << "排序前:" << endl;
  for (int i = 0; i < nums; i++) {
    array[i] = get_number();
    cout << array[i] << "\t";
  }
  cout << endl;
  //呼叫排序
  sorted(array, nums);
  cout << "由小到大的排序後:" << endl;
  for (int i = 0; i < nums; i++) {
    cout << array[i] << "\t";
  }
  cout << endl;
}
