#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main() {
	char letter;
	int age;
	char url[30];
	float price;

	printf("請輸入字元:");
	scanf("%c", &letter);
	printf("請輸入age:");
	scanf("%d",&age);
	printf("請輸入字串:");
	scanf("%s", url);
	printf("請輸入價格:");
	scanf("%f", &price);
	printf("這是字元:%c\n",letter);
	printf("這是整數:%d,這是字串:%s,這是浮點數:%f\n",age, url, price);
}
