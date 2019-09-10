#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  srand(time(NULL));
  int guess  = rand() % 99 + 1;
  cout << "guess=" << guess;
}
