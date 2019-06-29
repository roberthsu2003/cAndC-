/*
 ============================================================================
 Name        : score2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int nums = 5;
		int scores[nums];
		int sum=0;
		double ave;
		for(int i=0;i<nums;i++){
			//cout << "請輸入第" << i+1 << "位學的成績";
			//cin >> scores[i];
			printf("請輸入第%d位學的成績",i);
			scanf("%d",&scores[i]);
		}

		for(int i=0; i<nums; i++){
			sum += scores[i];
		}

		ave = (double)sum / nums;

		//cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
		printf("全班總成績為:%d分,平均為%.2f分\n",sum,ave);
	return EXIT_SUCCESS;
}
