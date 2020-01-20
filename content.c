#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sum = 0;
	for(int i=2;i<=10;i+=2){
		sum += i;
		cout << "第" << i/2 << " 次迴圈的 i = " << i << "總和為 " << sum << "\n";
	}

	return 0;
}
