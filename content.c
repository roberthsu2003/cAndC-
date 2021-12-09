#include <stdio.h>

int main(void) {
  double PI = 3.14159678;
  double area;
  int radius = 9;
  area = radius * radius * PI;
  printf("圓面積是%.2f\n",area);
  return 0;
}
