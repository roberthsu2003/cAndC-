#include <stdio.h>

int main(void) {
	int chinese,english,math;
  	printf("請輸入國文成積(0-100):");
	scanf("%d", &chinese);

	printf("請輸入英文成積(0-100):");
	scanf("%d", &english);

	printf("請輸入數學成積(0-100):");
	scanf("%d", &math);

	unsigned long sum = chinese + english + math;
	//float average = (float)sum / 3;
	float average = sum / 3.0;
	printf("average=%.2f\n",average);
  return 0;
}
