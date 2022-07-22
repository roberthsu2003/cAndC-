#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void sorted(int array[], int nums) {
  //陣列排序
  int temp;
  for (int i = 0; i < nums - 1; i++) {
    for (int j = i + 1; j < nums; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

int main() {
  int num = 7;
  int lot[49];
  int choose[num];
  int maxIndex = 48;

  for (int i = 0; i < 49; i++) {
    lot[i] = i + 1;
  }
  srand(time(NULL));
  for (int i = 0; i < num; i++) {
    int randIndex = rand() % (maxIndex + 1);
    choose[i] = lot[randIndex];
    lot[randIndex] = lot[maxIndex];
    maxIndex--;
  }

  //排序
  sorted(choose, 7);

  cout << "本期大樂透電腦選號號碼如下:\n\n";

  for (int i = 0; i < num; i++) {
    cout << choose[i] << " ";
  }
  cout << endl;
}
