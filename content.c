#include <iostream>
#include <stdio.h>

int main(void) {
	int chinese;
	int english;
	int math;
  	printf("請輸入分數(國文,英文,數學):");
	scanf("%d,%d,%d",&chinese,&english,&math);

	int total;
	total = chinese + english + math;
	printf("國文是%d\n",chinese);
	printf("英文是%d\n",english);
	printf("數學是%d\n",math);	
	printf("總分為是%d\n",total);
  	return 0;
}
