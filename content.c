#include <iostream>
#include <stdio.h>

int main() {
	int chinese;
	int math;
	int bonus=0;
	printf("請同時輸入國文成績和數學成績(國文,數學):");
	scanf("%d,%d", &chinese, &math);
	//巢狀判斷
	if(chinese == 100){
		if(math==100){
			bonus = 1000;
		}else{
			bonus = 500;
		}
	}else{
		if(math==100){
			bonus = 500;
		}
	}
	printf("獎金是:%d\n", bonus);
}
