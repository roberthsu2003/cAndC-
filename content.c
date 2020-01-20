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
		cout << "請輸入第" << num+1 << "個數值:";
		cin >> score;
		if (score < 0){
			break;
		}
		num +=1;
		
		if(score % 2 == 1){
			continue;
		}
		sum += score;
			
	}while(true);
	
	cout << "所有輸入的正偶的加總是:" << sum ;
	return 0;
}
