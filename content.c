#include <stdio.h>

int main(void) {
  unsigned char born;
  printf("出生民國年份:");
  scanf("%u", &born);

  unsigned short year;
  year = born + 1911;

  unsigned char age;
  age = 2022 - year;

  printf("對應西元年份:%d,今年%u歲\n", year, age);
  return 0;
}
