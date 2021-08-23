main.c

#include <stdio.h>
#include "tools.h"

int main(void) {
	int value1,value2;
	int result;
  	printf("請輸入第1個數:");
	scanf("%d",&value1);
	printf("請輸入第2個數:");
	scanf("%d",&value2);
	result = add(value1,value2);
	printf("2數相加的值是:%d\n",result);
    return 0;
}

tools.h
#ifndef _TOOLS_H_
#define _TOOLS_H_

int add(int a,int b){
	return a+b;
}

#endif
