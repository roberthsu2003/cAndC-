#include <iostream>
#include <time.h>

using namespace std;
int main() {
  srandom(time(NULL));
  int min = 1;
  int max = 10;
  std::cout << random() % (max - min + 1) + min << endl;
}
