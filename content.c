#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void showArray(int tempary[], int count){
	for(int i=0; i<count;i++){
		printf("ary[%d]=%d\t",i,tempary[i]);
	}
	printf("\n");
}

void sub2(int tempary[],int count){
	for(int i=0; i<count; i++){
		tempary[i] *= 2;
	}
}

int main() {
int ary[] = {212, 328, 765, 986};
int count = sizeof(ary) / sizeof(ary[0]);
printf("呼叫showArray\n");
showArray(ary, count);
sub2(ary, count);
showArray(ary, count);
}
