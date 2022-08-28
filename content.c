#include <stdio.h>

int main(void) {
  int x;
  printf("x變數的記憶體位址是%x\n", &x);

  int y;
  printf("x變數的記憶體位址是%x\n", &y);
  return 0;
}
