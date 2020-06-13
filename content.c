#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
int a=0, b=0, c=0, d=0;
cout << "請輸入a:";
scanf("%d", &a);
printf("您輸入的a是%d\n", a);

printf("請輸入b:");
scanf("%d",&b);
printf("您輸入的b是%d\n", b);

printf("請輸入c和d的值(格式:c-d):");
scanf("%d-%d",&c,&d);
printf("您輸入的c是%d\n", c);
printf("您輸入的d是%d\n", d);
}
