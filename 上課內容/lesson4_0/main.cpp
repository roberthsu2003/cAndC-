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

void change_value(int *array, int n) {
  for (int i = 0; i < n; i++) {
    *(array + i) *= 10;
  }
}

int main() {
  int nums[] = {10, 20, 30};
  int count = sizeof(nums) / sizeof(nums[0]);
  change_value(nums, count);
  for (int i = 0; i < count; i++) {
    cout << nums[i] << endl;
  }
}
