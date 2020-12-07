#include <iostream>

int main() {
	int sum = 0;
	for(int i=2; i<=10; i+=2){
		sum += i;
		printf("第%d次迴圈的 i = %d,總和為 %d \n", i/2, i, sum); 
	}
}
