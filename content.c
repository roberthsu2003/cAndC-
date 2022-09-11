#include <iostream>
#include <time.h>

using namespace std;
int main() {
  srandom(time(NULL));
  std::cout << random() % 10 << endl;
}
