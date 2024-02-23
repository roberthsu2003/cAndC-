//猜數字遊戲(1~10)
#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));
  int min = 1;
  int max = 10;
  int guess = random() % (max - min + 1) + min;
  cout << "=============猜數字遊戲=============\n" << endl;
  cout << "要猜的數字是:" << guess << endl;
}
