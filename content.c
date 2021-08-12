#include <iostream>

int main() {
	int chinese;
	int math;
	int bonus;

	printf("請輸入國文成績和數學成績(國文,數學):");
	scanf("%d,%d",&chinese,&math);
	if(chinese == 100){
		//國文100
		if(math == 100){
			//國文100
			//數學100
			bonus = 1000;
		}else{
			//國文100
			//數學不是100
			bonus = 500;
		}
	}else{
		//國文不是100
		if(math == 100){
			//國文不是100
			//數學100
			bonus = 500;
		}else{
			bonus = 0;
		}
	}

	printf("獎金是:%d\n",bonus);
}
