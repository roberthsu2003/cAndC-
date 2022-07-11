#include <stdio.h>

int main(void) {
  //c語言的輸入輸出
	int chinese,english;
	printf("請輸入中文和英文成績(國文,英文):");
	scanf("%d,%d",&chinese,&english);
	printf("您的中文分數是%d,英文分數是%d\n",chinese,english);

	int total = chinese + english;
	int average = total / 2;
	printf("總分是%d,平均是%d\n",total, average);
	return 0;
	
}
