#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "loto.h"

using namespace std;


int main() {
  int groups;
  srand(time(NULL));
  cout << "請輸入所需要的大樂透組數:";
  cin >> groups;
  for (int i = 0; i < groups; i++) {
    int num = 7;
    int choose[num];
    //建立一組7個不重複號碼的樂透
    created_loto(choose, num);
    //建立一組7個不重複號碼的樂透
    created_loto(choose, num);
    //排序
    sorted(choose, num);

    cout << "大樂透電腦選號號碼-第" << i + 1 << "組如下:\n";
    for (int i = 0; i < num; i++) {
      cout << choose[i] << " ";
    }
    cout << "\n\n";
  }
}





loto.h
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

void created_loto(int array[], int nums) {
  int lot[49];
  int maxIndex = 48;
  for (int i = 0; i < 49; i++) {
    lot[i] = i + 1;
  }
  for (int i = 0; i < nums; i++) {
    int randIndex = rand() % (maxIndex + 1);
    array[i] = lot[randIndex];
    lot[randIndex] = lot[maxIndex];
    maxIndex--;
  }
}

