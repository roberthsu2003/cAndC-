#include <iostream>
#include <time.h>
using namespace std;
int main() {
  int max_index = 48;
  int min_index = 0;
  int number_box[49];
  int loto[7];
  srandom(time(NULL));

  //建立1~49的值
  for (int i = 0; i < 49; i++) {
    number_box[i] = i + 1;
  }

  //建立loto的值
  for (int i = 0; i < 7; i++) {
    //建立亂數索引0~48,0~47,0~46,0~45,0~44,0~43,0~42
    int random_index = random() % (max_index - min_index + 1) + min_index;
    loto[i] = number_box[random_index];
    number_box[random_index] = number_box[max_index];
    max_index--;
  }

  cout << "本期大樂透電腦選號號碼如下:\n\n";
  for (int i = 0; i < 7; i++) {
    cout << loto[i] << "\t";
  }
  cout << endl;
}
