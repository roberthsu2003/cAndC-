#include <iostream>
using namespace std;

void division10(int *x) {
  for (int i = 0; i < 3; i++) {
    *(x + i) /= 10;
  }
}

void multiply10(int x[]) {
  for (int i = 0; i < 3; i++) {
    x[i] *= 10;
  }
}

void print(int x[]) {
  for (int i = 0; i < 3; i++) {
    cout << x[i] << "\t";
  }
  cout << endl;
}

int main() {
  int num = 3;
  int *n = new int[3];
  *(n + 0) = 10;
  *(n + 1) = 20;
  *(n + 2) = 30;
  print(n);

  multiply10(n);
  print(n);

  division10(n);
  print(n);
}
