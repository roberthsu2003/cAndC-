#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));
  int elements = 200;
  int arr[elements];
  for (int i = 0; i < elements; i++) {
    arr[i] = random() % (50 - 1 + 1) + 1;
  }

  int search_value = 3;
  int repeation = 0;
  for (int i = 0; i < elements; i++) {
    if (arr[i] == search_value) {
      repeation += 1;
    }
  }
  cout << search_value << "的數量有" << repeation << endl;
}
