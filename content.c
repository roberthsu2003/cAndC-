#include <iostream>
using namespace std;

void changeToZero2(int *ptr) {
  *(ptr + 0) = 0;
  *(ptr + 1) = 0;
  *(ptr + 2) = 0;
  *(ptr + 3) = 0;
  *(ptr + 4) = 0;
}

void changeToZero1(int array[]) {
  array[0] = 0;
  array[1] = 0;
  array[2] = 0;
  array[3] = 0;
  array[4] = 0;
}

int main() {
  int scores[] = {78, 92, 63, 95, 91};
  for (int i = 0; i < 5; i++) {
    cout << scores[i] << "\t";
  }
  cout << endl;

  //內容更改為0
  // changeToZero1(scores);
  changeToZero2(scores);

  //重新輸出
  for (int i = 0; i < 5; i++) {
    cout << scores[i] << "\t";
  }
  cout << endl;
}
