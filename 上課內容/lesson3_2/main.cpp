#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srandom(time(NULL));
  int n = 10; //元素數量
  int array[n];
  int temp;

  //使用亂數1~99,建立元素值
  int min = 1;
  int max = 99;
  for(int i=0; i<n; i++){
    array[i] = random() % (max-min+1) + min;
  }
  cout << "排序前:" << endl;
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  //泡沫排序法
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (array[i] < array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  cout << "排序後:" << endl;
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
