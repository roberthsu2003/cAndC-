//============================================================================
// Name        : for1.cpp
//計算2 - 10所有偶數的總和

#include <iostream>
using namespace std;
int main() {
  int sum = 0;
  for(int i=2; i<=100; i+=2){
      sum += i;
      cout << "第" << i/2 << "次迴圈的 i=" << i << ",總和為 " << sum << "\n";
  }

  return 0;
}
