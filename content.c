#include <iostream>

int main() {
	int min = 1;
	int max = 100;
	int keyin;
	int count=0;	
	srand(time(NULL));
	int guess = rand() % max + min;

	printf("===============猜數字遊戲=================:\n\n");
	do{
		printf("猜數字範圍%i~%i:",min, max);
		scanf("%i",&keyin);
		count += 1;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				printf("賓果!猜對了,答案是%i\n", guess);
				printf("您猜了%i次\n", count);
				break;
			}else if(keyin < guess){
				min = keyin + 1;
				printf("再大一點");
			}else if(keyin > guess){
				max = keyin - 1;
				printf("再小一點");
			}
			printf("您猜了%i次\n\n", count);
		}else{
			printf("請輸入提示範圍內的數字! \n");
		}
		
	}while(true);

	printf("遊戲結束\n");
}
