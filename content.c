#include <iostream>
#include <time.h>
using namespace std;

void print_array(int n[], int elements) {
  for (int i = 0; i < elements; i++) {
    cout << n[i] << " ";
  }
  cout << endl;
}

void sort_to_big(int n[], int elements) {
  for (int i = 0; i < elements - 1; i++) {
    for (int j = i + 1; j < elements; j++) {
      //前面的比較大,要2數交換
      if (n[i] > n[j]) {
        int temp;
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }
}

void sort_to_small(int n[], int elements) {
  for (int i = 0; i < elements - 1; i++) {
    for (int j = i + 1; j < elements; j++) {
      //前面的比較大,要2數交換
      if (n[i] < n[j]) {
        int temp;
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }
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
 

  cout << "由小到大排序:" << endl;
	sort_to_big(arr, elements);
  print_array(arr, elements);

	cout << "由大到小的排序:" << endl;
	sort_to_small(arr, elements);
	print_array(arr, elements);
}
