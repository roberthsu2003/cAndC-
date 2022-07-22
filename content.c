#include <iostream>
using namespace std;

int main() {
  int scores[] = {78, 92, 63, 95, 91};
  for (int i = 0; i < 5; i++) {
    cout << scores[i] << "\t";
  }
  cout << endl;

  //內容更改為0
  for (int i = 0; i < 5; i++) {
    scores[i] = 0;
  }

  //重新輸出
  for (int i = 0; i < 5; i++) {
    cout << scores[i] << "\t";
  }
  cout << endl;
}
