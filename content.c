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
			printf("正確的範圍\n");
		}else{
			printf("請輸入提示範圍內的數字! \n");
		}
		break;
	}while(true);
	printf("遊戲結束\n");
}
