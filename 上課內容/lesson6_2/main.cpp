//猜數字遊戲(1~10)
#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));
  int min = 1;
  int max = 100;
  int count = 0;
  int keyin;
  int guess = random() % (max - min + 1) + min;
  cout << "=============猜數字遊戲=============\n" << endl;
  while (true) {
    printf("猜數字範圍%d~%d:", min, max);
    cin >> keyin;
    count++;
    if (keyin >= min && keyin <= max) {
      //正確的範圍
      if (keyin == guess) {
        cout << "賓果!猜對了,答案是" << guess << endl;
        cout << "您猜了" << count << "次\n";
        break;
      } else if (keyin > guess) {
        max = keyin - 1;
        cout << "再小一點!";
      } else if (keyin < guess) {
        min = keyin + 1;
        cout << "再大一點!";
      }
      cout << "您已經猜了" << count << "次" << endl;
      // continue;
    } else {
      cout << "超出範圍" << endl;
      // continue;
    }
  }
  cout << "遊戲結束" << endl;
}
