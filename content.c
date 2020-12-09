#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int guess;
	int max = 100;
	int min = 1;
	int keyin;
	int count = 0;
	long long int time1 = time(NULL);
	//printf("%lld\n",time1);
	srand(time1);
	guess=rand() % max + min;
	//printf("亂數值是%d\n", guess);
	printf("===============猜數字遊戲=================:\n\n");
	do{
		printf("猜數字範圍%d~%d:",min, max);
		scanf("%d", &keyin);
		count++;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				printf("賓果!猜對了,答案是%d\n", guess);
				printf("您猜了%d次\n", count);
				break;
			}else if(keyin > guess){
				max = keyin - 1;
				printf("再小一點");
			}else if(keyin < guess){
				min = keyin + 1;
				printf("再大一點");
			}
			printf("您猜了%d次\n\n", count);
		}else{
			printf("請輸入提示範圍內的數字! \n");
		}
	}while(true);
}
