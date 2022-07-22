#include <iostream>
using namespace std;

void changToZero1(int array[]) {
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
  changToZero1(scores);

  //重新輸出
  for (int i = 0; i < 5; i++) {
    cout << scores[i] << "\t";
  }
  cout << endl;
}
