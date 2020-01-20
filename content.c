#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	for(int i=1; i<=15; i++){
		for(int j=1; j<=15; j++){
			cout << i << "*" << j << "=" << i*j << "\t";
		}
		cout << "\n";
	}
	return 0;
}
