#include <stdio.h>
#include "rectangle.h"

int main(void) {
  Rec rec1;
  rec1.width = 10;
  rec1.height = 20;
  printf("矩型的寬是%d,高是%d,面積是%d\n",rec1.width,rec1.width,area(rec1));
  return 0;
}



rectangle.h

typedef struct rec{
	int width;
	int height;
}Rec;

int area(Rec r){
	return r.width * r.height;
}
