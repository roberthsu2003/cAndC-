#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	char runAgain;
	do{
		
		printf("程式還要繼續嗎?(輸入N....結束))\n");	
		scanf("%s",&runAgain);
	}while(runAgain != 'N');
}
