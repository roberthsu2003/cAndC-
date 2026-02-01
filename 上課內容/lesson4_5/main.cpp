#include <iostream>
using namespace std;

void multiple10(int *array, int n) {
  for (int i = 0; i < n; i++) {
    array[i] *= 10;
  }
}

int main() {
  int n = 5;
  int array[] = {10, 20, 30, 40, 50}; //陣列變數放的是記憶體位置
  cout << "陣列的記憶體位址:" << array << endl;
  multiple10(array, n);
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
