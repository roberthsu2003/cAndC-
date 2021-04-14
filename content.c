//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int chineses;
	int math;
	int bonus = 0;
	printf("請輸入國文成績和數學成績(國文,英文):");
	scanf("%d,%d",&chineses, &math);
	if(chineses == 100 && math == 100){
		bonus = 1000;
	}else if(chineses == 100 || math == 100){
		bonus = 500;
	}

	printf("獎金是:%i\n",bonus);
}
