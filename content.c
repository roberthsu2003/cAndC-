#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
char runAgain;

int main() {
	do{
		printf("程式還要繼續嗎?(輸入N....結束))\n");
		scanf("%c",&runAgain);
	}while(runAgain != 'N');
}
