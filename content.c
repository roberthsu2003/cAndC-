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

		printf("亂數值是%d,使用者輸入是%d,次數是%d\n", guess, keyin, count);
	}while(count <= 3);
}
