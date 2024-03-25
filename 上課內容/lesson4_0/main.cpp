#include <iostream>
using namespace std;
/*
void change_value(int array[]){
        array[0] *= 10;
        array[1] *= 10;
        array[2] *= 10;
}
*/
/*
void change_value(int* array){
        array[0] *= 10;
        array[1] *= 10;
        array[2] *= 10;
}
*/

void change_value(int *array) {
  *(array + 0) *= 10;
  *(array + 1) *= 10;
  *(array + 2) *= 10;
}

int main() {
  int nums[] = {10, 20, 30};
  change_value(nums);

  for (int i = 0; i < 3; i++) {
    cout << nums[i] << endl;
  }
}
