//請設計一個程式，讓使用者輸入數值，只有加總正偶數值，不加總正奇數值，如果輸入負數，結束程式。
#include <iostream>

int main() {
	int sum = 0;
	int num=1;
	int inputNum=0;
	do{
		printf("請輸入第%i個數值", num);
		scanf("%i", &inputNum);
		if(inputNum < 0) break;
		num++;
		if(inputNum % 2 == 1) continue;
		sum += inputNum;

	}while(true);
	printf("所有輸入的正偶數的加總是:%i", sum);

}
