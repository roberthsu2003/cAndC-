#include <stdio.h>

int main(void) {
  unsigned char n = 20;
  printf("%u\n", n);

  n = 255;
  printf("%u\n", n);

  int m = 10000;
  n = m;
  printf("%u\n", n); //超過範圍出錯了

  short x;
  x = m;
  printf("%d\n", x);
  return 0;
}
