#include <stdio.h>

int main(void) {
	int chinese;
	int english;
	int math;
  	printf("請輸入分數(國文,英文,數學):");
	scanf("%d,%d,%d",&chinese,&english,&math);

	int total;
	total = chinese + english + math;
	printf("總分為是%d\n",total);
  	return 0;
}
