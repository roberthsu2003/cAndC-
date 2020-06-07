#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

float temperature(int);

int main() {
	int value;
	char runAgain;
	float result;
	do{
		cout << "請輸入攝氏溫度:";
		cin >> value;
		result = temperature(value);
		printf("華氏溫度=%.2f\n",result);
		printf("程式還要繼續嗎?(輸入N....結束))\n");	
		scanf("%s",&runAgain);
	}while(runAgain != 'N');
	printf("程式結束");
}

float temperature(int value){
	return 1.8 * value + 32;
}
