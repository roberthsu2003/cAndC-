#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num = 0;
	int score=0;
	int sum=0;
	do{
		cout << "請輸入第" << num+1 << "學生的成績:";
		cin >> score;
		if (score < 0){
			break;
		}
		sum += score;
		num +=1;	
	}while(true);
	
	cout << "全型總成績為:" << sum << "平均分數為" << (float)sum / num;
	return 0;
}
