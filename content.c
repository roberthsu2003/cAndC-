main.c

#include <stdio.h>
#include "tools.h"
#include "tools.h"
#include "tools.h"
#include "tools.h"

int main(void) {
  int a1 = 10;
  int a2 = 20;
  int result = add(a1, a2);
  printf("加總值為%d\n", result);
  return 0;
}


tools.h

#ifndef _TOOLS_H_
#define _TOOLS_H_

int add(int a, int b){
	return a + b;
}

#endif
