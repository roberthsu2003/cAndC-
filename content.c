#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void play_game(){
  int guess;
  int keyin;
  int count = 0;
  int max = 99;
  int min = 1;

  srand(time(NULL));
  guess = rand() % (max - min + 1) + min;
  cout << guess << endl;
  cout << "==============猜數字遊戲===============\n\n";
  while (true) {
    printf("猜數字範圍%d~%d:", min, max);
    cin >> keyin;
    count += 1;

    if (keyin >= min && keyin <= max) {
      //輸入的範圍正確
      if (keyin == guess) {
        cout << "賓果!猜對了,答案是" << guess << endl;
        cout << "您猜了" << count << "次" << endl;
        break;
      } else if (keyin > guess) {
        max = keyin - 1;
        cout << "再小一點!";
      } else if (keyin < guess) {
        min = keyin + 1;
        cout << "再大一點!";
      }
      cout << "您已經猜了" << count << "次" << endl;
    } else {
      //輸入的範圍不正確
      cout << "請輸入提示範圍內的數字!\n";
      continue;
    }
  };
}

int main() {
  play_game();
  return 0;
}
