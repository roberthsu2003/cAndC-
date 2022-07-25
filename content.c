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

void created_loto(int array[], int nums){
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

int main() {
  int num = 7;  
  int choose[num];  
  srand(time(NULL));
  //建立一組7個不重複號碼的樂透
  created_loto(choose,num);
  //排序
  sorted(choose, 7);

  cout << "本期大樂透電腦選號號碼如下:\n\n";

  for (int i = 0; i < num; i++) {
    cout << choose[i] << " ";
  }
  cout << endl;
}
