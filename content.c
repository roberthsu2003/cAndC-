#include <iostream>
using namespace std;
void change(int n[], int e) {
  cout << "n的記憶體位址:" << n << endl;
  for (int i = 0; i < e; i++) {
    n[i] *= 10;
  }
}

int main() {
  //陣列變數
  int nums[] = {10, 20, 30, 40, 50, 60, 70, 80};
  int elements = sizeof(nums) / sizeof(nums[0]);
  cout << "nums的記憶體位址" << nums << endl; // 陣列變數儲存的是記憶體位置
  change(nums, elements);

  for (int i = 0; i < elements; i++) {
    cout << nums[i] << endl;
  }
}
