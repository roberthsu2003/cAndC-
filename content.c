#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void showNum(int);

int main() {
	int inputNum;
	cout << "請輸入數字 n:";
	cin >> inputNum;
	showNum(inputNum);
	cout << endl;
	return 0;
}

void showNum(int n){
	int i = 1;
	while(true){
		if (i > n){
			return;	
		}
		cout << i << " ";
		i++;
	}
}
