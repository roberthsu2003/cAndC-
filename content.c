#include <iostream>
#include <time.h>

using namespace std;
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
  for (int i = 0; i < nums - 1; i++) {
    for (int j = i + 1; j < nums; j++) {
      if (array[i] > array[j]) {
        int temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  //排序後
  cout << "排序後:" << endl;
  for (int i = 0; i < nums; i++) {
    cout << array[i] << "\t";
  }
  cout << endl;
}
