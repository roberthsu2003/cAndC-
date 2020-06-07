#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

float temperature(int value){
	return 1.8 * value + 32;
}

int main() {
	int value;
	float result;
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
	printf("----------------------------\n");

	printf("請輸入攝氏溫度:");
	scanf("%d",&value);
	result = temperature(value);
	printf("華氏溫度=%.2f",result);
	return 0;
}
