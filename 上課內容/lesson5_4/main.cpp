#include <iostream>
using namespace std;

int main() {

  for (int i = 1; i < 10; i++) {
    cout << "i=" << i << endl;
    //巢狀迴圈
    for (int j = 1; j < 10; j++) {
      cout << "j=" << j << " ";
    }
    cout << endl;
    cout << "=================" << endl;
  }
}
