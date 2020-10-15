//小美是一位教師，請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績。請使用break
#include <iostream>

int main() {
	int sum = 0;
	int num = 0;
	int score=0;
	do{		
		printf("請輸入第%i位學生的成績:",num+1);
		scanf("%i", &score);
		if(score<0)	break;
		sum += score;
		num += 1;		
	}while(true);

	printf("全班總成績為:%i ,平均分數為:%.2f", sum, (float)sum/num);

}
