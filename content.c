#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	const int nums = 5;
	int scores[nums];
	int sum = 0;
	float ave;
	for(int i=0;i<nums;i++){
		cout << "請輸入第" << i+1 << "位學生的成績";
		scanf("%d",&scores[i]);
		}
	
	for(int i=0; i<nums; i++){
		sum += scores[i];
	}
	
	ave = (float)sum / nums;
	
	//cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
	printf("全班總成績為:%d分,平均為%.2f分\n",sum,ave);
	return 0;
}
