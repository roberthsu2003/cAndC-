main.c

#include <stdio.h>
#include "tools.h"
#include "tools.h"

int main(void) {
  printf("Hello World\n");
  return 0;
}


tools.h

//使用#ifndef的語法,預防tools.h被重覆include
#ifndef __TOOLS_H__
#define __TOOLS_H__

int add(int a, int b){
	return  a+b;
}

#endif
