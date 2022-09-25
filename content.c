#include <iostream>
#include <time.h>
using namespace std;

void print_array(int n[], int elements) {
  for (int i = 0; i < elements; i++) {
    cout << n[i] << " ";
  }
  cout << endl;
}

int main() {
  srandom(time(NULL));
  int elements;
  cout << "請輸入陣列元素的數量:";
  cin >> elements;
  int arr[elements];
  for (int i = 0; i < elements; i++) {
    arr[i] = random() % (100 - 1 + 1) + 1;
  }
  cout << "排序前的內容:" << endl;
  print_array(arr, elements);
}
