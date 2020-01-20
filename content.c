#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	for(int i=1; i<=5; i++){
		cout << "外部第" << i << "次迴圈";
		for(int j=0; j<i; j++){
			cout << "#";
		}
		cout << "\n";	
	}
	
	return 0;
}
