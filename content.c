///國文100同時數學100,獎金1000
//國文100或者數學100,獎金500
//巢狀判斷

#include <iostream>

int main() {
	int chinese;
	int math;
	int bonus = 0;
	printf("請輸入國文成績和數學成績(國文,英文):");
	scanf("%i,%i",&chinese,&math);
	if(chinese == 100){
		if(math == 100){
			bonus = 1000;
		}else{
			bonus = 500;
		}
	}else{
		if(math == 100){
			bonus = 500;
		}else{
			bonus = 0;
		}
	}

	printf("獎金是:%i\n", bonus);
}
