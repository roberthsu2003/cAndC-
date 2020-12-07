#include <iostream>
#include <stdio.h>

int main() {
	int chinese;
	int math;
	int bonus = 0;
	printf("請輸入國文成績和數學成績(國文,英文):");
	scanf("%d,%d", &chinese, & math);
	if(math==100 && chinese==100){
		bonus = 1000;
	}else if(math==100 || chinese==100){
		bonus = 500;
	}else{
		bonus = 0;
	}

	printf("獎金是:%i\n", bonus);
}
