#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void showNum(int n){
	int i = 1;
	while(true){
		if(i > n){
			return;
		}
		cout << i << " ";
		i++;
	}
}

int main() {
	int inputNum;
	printf("請輸入數字n:");
	scanf("%d", &inputNum);
	showNum(inputNum);
	printf("\n");
	return 0;
}
