#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));
  int elements = 200;
  int arr[elements];
  for (int i = 0; i < elements; i++) {
    arr[i] = random() % (50 - 1 + 1) + 1;
    cout << arr[i] << " ";
  }
}
