#include <iostream>
//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500
using namespace std;

int main() {
	int chinese,math,bonus=0;
	printf("請輸入國文成績和數學成績(國文,英文):");
	scanf("%d,%d",&chinese,&math);
	if(math == 100 && chinese == 100){
		bonus = 1000;
	}else if(math == 100 || chinese == 100){
		bonus = 500;
	}
	printf("獎金是:%d\n", bonus);
}
