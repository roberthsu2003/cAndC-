#include <stdio.h>

int main(void) {
	//c語言的輸入輸出
	int chinese,english;
	printf("請輸入中文成績:");
	scanf("%d", &chinese);
	printf("請輸入英文成績:");
	scanf("%d",&english);

	printf("您的中文分數是%d,英文分數是%d\n",chinese,english);
	
  return 0;
}
