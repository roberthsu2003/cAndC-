#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float in1, in2, in3, max;
	cout << "請輸入第一個數:";
	cin >> in1;
	
	cout << "請輸入第二個數:";
	cin >> in2;	
	
	cout << "請輸入第三個數:";
	cin >> in3;
	
	max = in1 > in2 ? in1 : in2;
	max = max > in3 ? max : in3;
	
	cout << "請輸入三個數中最大的數為:" << max << "\n";
	
	
	return 0;
}
