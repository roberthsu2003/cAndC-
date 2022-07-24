#include <iostream>
#include <math.h>
using namespace std;

int figure(int x, int y) {
  return pow(x, 3) + 3 * pow(x, 2) * y + 3 * x * pow(y, 2) + pow(y, 3);
}
int main() {
  for (int x = 1; x < 5; x++) {
    for (int y = 1; y < 5; y++) {
      cout << "x=" << x << " y=" << y << ": " << figure(x, y) << endl;
    }
  }
}
