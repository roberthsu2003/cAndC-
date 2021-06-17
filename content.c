#include <iostream>
#include <stdio.h>

using namespace std;
//巢狀迴圈
int main() {
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}
