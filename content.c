#include <iostream>
#include <math.h>
using namespace std;

double degree_to_radian(int degree) {
  const double PI = 3.141592653;

  return PI / 180 * degree;
}

double get_sine(int degree) {
  double radian = degree_to_radian(degree);
  return sin(radian);
}

int main() {
  int degrees[] = {0, 30, 45, 60, 90, 180, 360};
  int length = sizeof(degrees) / sizeof(degrees[0]);
  for (int i = 0; i < length; i++) {    
    printf("度:%d sin()值為:%.2f\n", degrees[i], get_sine(degrees[i]));
  }
}
