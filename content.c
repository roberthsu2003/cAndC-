main.c

#include <stdio.h>
#include "tools.h"
#include "tools.h"

int main(void) {
	int a = 10;
	int b = 5;
	int result = add(a, b);
  	printf("相加的結果是%d\n",result);
  return 0;
}


tools.h

//避免被重複#include
#ifndef __TOOLS_H__
#define __TOOLS_H__

int add(int a,int b){
	return a+b;
}

#endif
