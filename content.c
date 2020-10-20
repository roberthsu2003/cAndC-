#include <iostream>

int main() {
	int min = 1;
	int max = 100;
	int keyin;	
	srand(time(NULL));
	int guess = rand() % max + min;

	printf("===============猜數字遊戲=================:\n\n");
	do{
		printf("猜數字範圍%i~%i:",min, max);
		scanf("%i",&keyin);
		break;
	}while(true);
	printf("遊戲結束\n");
}
