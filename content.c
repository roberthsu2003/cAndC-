#include <iostream>
#include <stdio.h>

int main() {
	int num=0;
	int inputNum;
	int sum = 0;
	do{
		num += 1;		
		printf("請輸入第%d個數值:", num);
		scanf("%d", &inputNum);
		if(inputNum < 0){
			break;
		}else if(inputNum % 2 == 1){
			continue;
		}

		sum += inputNum;

	}while(true);

	printf("所有輸入的正偶數的加總是:%d\n", sum);
}
